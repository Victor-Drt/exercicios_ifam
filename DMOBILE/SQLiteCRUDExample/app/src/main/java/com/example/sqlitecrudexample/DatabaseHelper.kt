package com.example.sqlitecrudexample

import android.content.ContentValues
import android.content.Context
import android.database.Cursor
import android.database.sqlite.SQLiteDatabase
import android.database.sqlite.SQLiteOpenHelper

class DatabaseHelper(context: Context) :
    SQLiteOpenHelper(context, DATABASE_NAME, null, 1) {

    /**
     * Nosso metodo onCreate().
     * Chamado quando o database eh criado pela primeira vez. Ou seja,
     * onde a criacao das tabelas e a populacao inicial
     * devem ocorrer.
     */
    override fun onCreate(db: SQLiteDatabase) {
        db.execSQL("CREATE TABLE $TABLE_NAME (ID INTEGER PRIMARY KEY " +
                "AUTOINCREMENT,NAME TEXT,GALAXY TEXT,TYPE TEXT)")
    }

    /**
     * Vamos criar nosso metodo on Update().
     * Chamado quando o database precisa ser atualizado. A implementacao deve
     * usar esse metodo para fazer um drop na tabela, adicionar tabela, o alguma outra coisa que precise
     * de uma atualizacao do shcema.
     */
    override fun onUpgrade(db: SQLiteDatabase, oldVersion: Int, newVersion: Int) {
        db.execSQL("DROP TABLE IF EXISTS " + TABLE_NAME)
        onCreate(db)
    }

    /**
     * Vamos criar nosso metodo on insertData()..
     * ele vai inserir os dados no nosso SQLIte database.
     */
    fun insertData(name: String, surname: String, marks: String) {
        val db = this.writableDatabase
        val contentValues = ContentValues()
        contentValues.put(COL_2, name)
        contentValues.put(COL_3, surname)
        contentValues.put(COL_4, marks)
        db.insert(TABLE_NAME, null, contentValues)
    }

    /**
     * Vamos criar um metodo updateData() que ira atualizar uma linha do nosso database
     */
    fun updateData(id: String, name: String, surname: String, marks: String):
            Boolean {
        val db = this.writableDatabase
        val contentValues = ContentValues()
        contentValues.put(COL_1, id)
        contentValues.put(COL_2, name)
        contentValues.put(COL_3, surname)
        contentValues.put(COL_4, marks)
        db.update(TABLE_NAME, contentValues, "ID = ?", arrayOf(id))
        return true
    }

    /**
     * Vamos criar uma funcao deleteData(id) para deletar uma linha baseado no id.
     */
    fun deleteData(id : String) : Int {
        val db = this.writableDatabase
        return db.delete(TABLE_NAME,"ID = ?", arrayOf(id))
    }

    /**
     * a seguinte propriedade getter vai retornar o Cursor contendo nosso select da tabalea
     */
    val allData : Cursor
        get() {
            val db = this.writableDatabase
            val res = db.rawQuery("SELECT * FROM " + TABLE_NAME, null)
            return res
        }

    /**
     * Vamos criar um companion object para manter nossos campos staticos
     * um Companion object e um objeto que e comum em todas as instancias de uma classe dada.
     */
    companion object {
        val DATABASE_NAME = "stars.db"
        val TABLE_NAME = "star_table"
        val COL_1 = "ID"
        val COL_2 = "NAME"
        val COL_3 = "GALAXY"
        val COL_4 = "TYPE"
    }
}
//end