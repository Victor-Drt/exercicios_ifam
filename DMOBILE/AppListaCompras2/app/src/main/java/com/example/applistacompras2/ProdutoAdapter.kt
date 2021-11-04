package com.example.applistacompras2

import android.content.Context
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ArrayAdapter
import android.widget.BaseAdapter
import android.widget.ImageView
import android.widget.TextView
import java.text.NumberFormat
import java.util.*

class ProdutoAdapter(private val context: Context,
                     private val dataSource: ArrayList<Produto>) : BaseAdapter(){

    override fun getCount(): Int {
        return dataSource.size
    }

    //2
    override fun getItem(position: Int): Any {
        return dataSource[position]
    }

    //3
    override fun getItemId(position: Int): Long {
        return position.toLong()
    }

    override fun getView(position: Int, convertView: View?, parent: ViewGroup): View {
        val v : View

        if(convertView != null){
            v = convertView
        }else{
            v = LayoutInflater.from(context).inflate(R.layout.list_view_item, parent,false)
        }

        val item = getItem(position) as Produto

        val txt_produto = v.findViewById<TextView>(R.id.txt_item_produto)
        val txt_qtd = v.findViewById<TextView>(R.id.txt_item_qtd)
        val txt_valor = v.findViewById<TextView>(R.id.txt_item_valor)
        val img_produto = v.findViewById<ImageView>(R.id.img_item_foto)
        //formatacao de moeda
        val f = NumberFormat.getCurrencyInstance(Locale("pt","br"))

        txt_qtd.text = item?.quantidade.toString()
        txt_produto.text = item?.nome
        txt_valor.text = f.format(item?.valor)   //item?.valor.toString()

        if(item?.foto != null)
            img_produto.setImageBitmap(item.foto)

        return v
    }
}