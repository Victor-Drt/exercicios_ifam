package com.example.appsupermercado

import android.os.Bundle
import android.view.inputmethod.InputMethodManager
import android.widget.ArrayAdapter
import android.widget.EditText
import android.widget.Toast
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import kotlinx.android.synthetic.main.activity_main.*
import kotlinx.android.synthetic.main.dialog_personalizada.*


class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        //implementacao do adapter da lista
        val produtosAdapter = ArrayAdapter<String>(this, android.R.layout.simple_list_item_1)

        //ligar o adapter a lista
        list_view_produtos.adapter = produtosAdapter

        //definindo a funcionalidade ao botao
        btn_inserir.setOnClickListener {
            //esconde o teclado apos clicar em 'inserir'
            val imm: InputMethodManager = getSystemService(INPUT_METHOD_SERVICE) as InputMethodManager
            imm.hideSoftInputFromWindow(currentFocus!!.windowToken, 0)

            val produto = txt_produto.text.toString()

            if (produto.isNotEmpty()){
                //adiciona no adapter
                produtosAdapter.add(produto)
                //limpa a caixa de texto
                txt_produto.text.clear()
            } else {
                txt_produto.error = "produto invalido"
            }
        }

        //ao clicar na tela o teclado vai ser ocultado
        cl_toda.setOnClickListener {
            val imm: InputMethodManager = getSystemService(INPUT_METHOD_SERVICE) as InputMethodManager
            imm.hideSoftInputFromWindow(currentFocus!!.windowToken, 0)
        }

        list_view_produtos.setOnItemLongClickListener { adapterView, view, position, id ->
            //pega o item clicado
            val item = produtosAdapter.getItem(position)

            //alert com as opcoes
            val builder = AlertDialog.Builder(this)
            builder.setTitle("Atenção!")
            builder.setMessage("O que deseja fazer?")

            builder.setPositiveButton("Editar"){ dialog, which ->
                val builder = AlertDialog.Builder(this)
                val inflater = layoutInflater
                val dialogLayout = inflater.inflate(R.layout.dialog_personalizada, null)
                val editText = dialogLayout.findViewById<EditText>(R.id.txt_novo_produto)

                with(builder) {
                    setTitle("Insira o novo produto")
                    setPositiveButton("Ok") { dialog, which ->
                        produtosAdapter.insert(editText.text.toString(), position)
                        produtosAdapter.remove(item)
                    }

                    setView(dialogLayout)
                    show()
                }
            }

            builder.setNegativeButton("Excluir"){ dialog, which ->
                val builder = AlertDialog.Builder(this)
                builder.setTitle("Atenção!")
                builder.setMessage("Tem certeza que deseja excluir?")

                builder.setPositiveButton("Sim"){ dialog, which ->
                    //remover o elemento selecionado
                    produtosAdapter.remove(item)
                    Toast.makeText(this, "Produto excluído!", Toast.LENGTH_SHORT).show()
                    dialog.dismiss()
                }
                builder.setNegativeButton("Não"){ dialog, which ->
                    Toast.makeText(this, "Ação cancelada!", Toast.LENGTH_SHORT).show()
                    dialog.dismiss()
                }

                val dialog: AlertDialog = builder.create()
                dialog.show()
            }

            builder.setNeutralButton("Cancelar"){ _, _ ->
                Toast.makeText(this, "Você cancelou a ação.", Toast.LENGTH_SHORT).show()
            }

            val dialog: AlertDialog = builder.create()
            dialog.show()

            //retorno indicando que o produto foi removido
            true
        }

    }
}