package com.example.applistacompras2

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import kotlinx.android.synthetic.main.activity_main.*
import java.text.DecimalFormat

class MainActivity : AppCompatActivity() {
    val dec = DecimalFormat("00.00") // formata o valor DOUBLE

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        btn_adicionar.setOnClickListener {
            //criar intent explícita
            val intent = Intent(this, CadastroActivity::class.java)
            //iniciando a atividade
            startActivity(intent)
        }

    }

    override fun onResume() {
        super.onResume()
        //configurando o textView para receber o valor total
        var listavalores = produtosGlobal
        var soma = 0.00

        for (produto in listavalores) {
            soma += produto.valor * produto.quantidade
        }

        txt_total.text = "R$ ${dec.format(soma)}"

        if (produtosGlobal.isNotEmpty()) {
            val listaProdutos = ArrayList(produtosGlobal) //coleta a lista
            val adapter = ProdutoAdapter(this, listaProdutos) //adiciona a lista e o contexto no adapter

            list_view_produtos.adapter = adapter
        }
    }
}

/*
    iniciar uma atividade
    iniciar um serviço
    fornecer uma trnasmissão
    intent é um objeto de mensagem que pode ser usado para solicitar uma ação de outro componente do aplicativo
     Link sobre as intents> https://developer.android.com/guide/components/intents-filters?hl=pt-br
     https://developer.android.com/reference/android/text/InputType.html
     https://github.com/Kotlin/anko/wiki/Anko-SQLite
*/