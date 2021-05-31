/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aplicacao;

import controle.CadastroFuncionario;

/**
 *
 * @author victo
 */
public class SisFuncionario {
    public static void main(String[] args) {
        CadastroFuncionario cf = new CadastroFuncionario();
        System.out.println("Funcionario 1");
        cf.cadastrar();
        System.out.println("Funcionario 2");
        cf.cadastrar();
        System.out.println("Relação Funcionarios: ");
        cf.listarTodos();
    }
    
}
