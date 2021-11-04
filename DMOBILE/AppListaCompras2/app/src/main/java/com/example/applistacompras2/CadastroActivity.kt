package com.example.applistacompras2

import android.app.Activity
import android.content.Intent
import android.graphics.Bitmap
import android.graphics.BitmapFactory
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_cadastro.*

class CadastroActivity : AppCompatActivity() {
    val COD_IMAGE = 101
    var imageBitMap: Bitmap? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_cadastro)

        btn_inserir.setOnClickListener{
            //capturando a entrada do usuario
            val produto = txt_produto.text.toString()
            val qtd = txt_qtd.text.toString()
            val valor = txt_valor.text.toString()

            if(produto.isNotEmpty() && qtd.isNotEmpty() && valor.isNotEmpty()){
                //enviar o produto para a lista
                val prod = Produto(produto,qtd.toInt(), valor.toDouble(), imageBitMap)
                produtosGlobal.add(prod)

                //limpar a cx de texto
                txt_produto.text.clear()
                txt_qtd.text.clear()
                txt_valor.text.clear()
            }else{
                txt_produto.error = if(txt_produto.text.isEmpty()) "Preencha com o nome do produto" else null
                txt_qtd.error = if(txt_qtd.text.isEmpty()) "Preencha com a quantidade" else null
                txt_valor.error = if(txt_valor.text.isEmpty()) "Preencha com o valor" else null
            }
        }

        img_foto_produto.setOnClickListener {
            abrirGaleria()
        }
    }

    fun abrirGaleria() {
        //definindo uma intent para acao de conteudo
        val intent = Intent(Intent.ACTION_GET_CONTENT)

        //definindo filtro para imagens
        intent.type = "image/*"

        //inicializando a activity com o resultado
        startActivityForResult(Intent.createChooser(intent, "Selecione uma imagem"), COD_IMAGE)
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)

        if (requestCode == COD_IMAGE && resultCode == Activity.RESULT_OK) {
            if (data != null) {
                //lendo URI com a imagem
                val inputStream = contentResolver.openInputStream((data.data!!))
                //transformando o resultado em bitmap
                imageBitMap = BitmapFactory.decodeStream(inputStream)
                //exibir a imagem no aplicativo
                img_foto_produto.setImageBitmap(imageBitMap)
            }
        }
    }
}