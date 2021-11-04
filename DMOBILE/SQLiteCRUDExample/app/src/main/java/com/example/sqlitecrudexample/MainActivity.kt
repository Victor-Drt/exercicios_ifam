package com.example.sqlitecrudexample

import android.app.AlertDialog
import android.os.Bundle
import android.view.View
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity

class MainActivity : AppCompatActivity() {
    //In Kotlin `var` is used to declare a mutable variable. On the other hand
    //`internal` means a variable is visible within a given module.
    internal var dbHelper = DatabaseHelper(this)

    /**
     * Let's create a function to show Toast message
     */
    fun showToast(text: String){
        Toast.makeText(this@MainActivity, text, Toast.LENGTH_LONG).show()
    }

    /**
     * Let's create a function to show an alert dialog with data dialog.
     */
    fun showDialog(title : String,Message : String){
        val builder = AlertDialog.Builder(this)
        builder.setCancelable(true)
        builder.setTitle(title)
        builder.setMessage(Message)
        builder.show()
    }

    /**
     * Let's create a method to clear our edittexts
     */
    fun clearEditTexts(){
         var nameTxt = findViewById<EditText>(R.id.nameTxt)
         var galaxyTxt = findViewById<EditText>(R.id.galaxyTxt)
         var typeTxt = findViewById<EditText>(R.id.typeTxt)
         var idTxt = findViewById<EditText>(R.id.idTxt)

        nameTxt.setText("")
        galaxyTxt.setText("")
        typeTxt.setText("")
        idTxt.setText("")
    }

    /**
     * Let's override our onCreate method.
     */
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        handleInserts()
        handleUpdates()
        handleDeletes()
        handleViewing()
    }

    /**
     * When our handleInserts button is clicked.
     */
    fun handleInserts() {
        var insertBtn = findViewById<Button>(R.id.insertBtn)


        insertBtn.setOnClickListener {
            try {
                var nameTxt = findViewById<EditText>(R.id.nameTxt)
                var galaxyTxt = findViewById<EditText>(R.id.galaxyTxt)
                var typeTxt = findViewById<EditText>(R.id.typeTxt)
                var idTxt = findViewById<EditText>(R.id.idTxt)
                dbHelper.insertData(nameTxt.text.toString(),galaxyTxt.text.toString(),
                    typeTxt.text.toString())
                clearEditTexts()
            }catch (e: Exception){
                e.printStackTrace()
                showToast(e.message.toString())
            }
        }
    }

    /**
     * When our handleUpdates data button is clicked
     */
    fun handleUpdates() {
        var updateBtn = findViewById<Button>(R.id.updateBtn)
        updateBtn.setOnClickListener {
            try {
                var nameTxt = findViewById<EditText>(R.id.nameTxt)
                var galaxyTxt = findViewById<EditText>(R.id.galaxyTxt)
                var typeTxt = findViewById<EditText>(R.id.typeTxt)
                var idTxt = findViewById<EditText>(R.id.idTxt)

                val isUpdate = dbHelper.updateData(idTxt.text.toString(),
                    nameTxt.text.toString(),
                    galaxyTxt.text.toString(), typeTxt.text.toString())
                if (isUpdate == true)
                    showToast("Data Updated Successfully")
                else
                    showToast("Data Not Updated")
            }catch (e: Exception){
                e.printStackTrace()
                showToast(e.message.toString())
            }
        }
    }

    /**
     * When our handleDeletes button is clicked
     */
    fun handleDeletes(){
        var deleteBtn = findViewById<Button>(R.id.deleteBtn)
        deleteBtn.setOnClickListener {
            try {
                var nameTxt = findViewById<EditText>(R.id.nameTxt)
                var galaxyTxt = findViewById<EditText>(R.id.galaxyTxt)
                var typeTxt = findViewById<EditText>(R.id.typeTxt)
                var idTxt = findViewById<EditText>(R.id.idTxt)
                dbHelper.deleteData(idTxt.text.toString())
                clearEditTexts()
            }catch (e: Exception){
                e.printStackTrace()
                showToast(e.message.toString())
            }
        }
    }

    /**
     * When our View All is clicked
     */
    fun handleViewing() {
        var viewBtn = findViewById<Button>(R.id.viewBtn)
        viewBtn.setOnClickListener(
            View.OnClickListener {
                val res = dbHelper.allData
                if (res.count == 0) {
                    showDialog("Error", "No Data Found")
                    return@OnClickListener
                }

                val buffer = StringBuffer()
                while (res.moveToNext()) {
                    buffer.append("ID :" + res.getString(0) + "n")
                    buffer.append("NAME :" + res.getString(1) + "n")
                    buffer.append("GALAXY :" + res.getString(2) + "n")
                    buffer.append("TYPE :" + res.getString(3) + "nn")
                }
                showDialog("Data Listing", buffer.toString())
            }
        )
    }
}
//end