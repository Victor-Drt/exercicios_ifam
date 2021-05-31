/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controle;

import java.util.ArrayList;
import modelo.Funcionario;
import visao.InterfaceFuncionario;

/**
 *
 * @author victo
 */
public class CadastroFuncionario {
    private ArrayList<Funcionario> funcionarios = new ArrayList<>();
    private InterfaceFuncionario interfaceFuncionario = new InterfaceFuncionario();
    
    public void cadastrar(){
        Funcionario funcionario;
        funcionario = interfaceFuncionario.telaCadastro();
        if(funcionario != null){ funcionarios.add(funcionario); }
    }
    
    public void listarTodos(){
        for(Funcionario funcionario: funcionarios){
            interfaceFuncionario.telaMostrar(funcionario);
        }
    }
    
}
