/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package visao;

import java.util.Scanner;
import modelo.Funcionario;

/**
 *
 * @author victo
 */
public class InterfaceFuncionario {
    public Funcionario telaCadastro(){
        Funcionario funcionario = new Funcionario();
        Scanner leia = new Scanner(System.in);
        
        System.out.print("Insira o Nome do Funcionario: ");
        funcionario.setNome(leia.next());
        
        System.out.print("Insira o Departamento do Funcionario: ");
        funcionario.setDepartamento(leia.next());
        
        System.out.print("Insira o Salario do Funcionario: ");
        funcionario.setSalario(leia.nextFloat());
        
        System.out.print("Insira o Ano de Contratação do Funcionario: ");
        funcionario.setAnoContrato(leia.nextInt());
        
        return funcionario;
    }
    
    public void telaMostrar(Funcionario funcionario){
        System.out.println("Nome: "+funcionario.getNome());
        System.out.println("Departamento: "+funcionario.getDepartamento());
        System.out.println("Salario: R$"+funcionario.getSalario());
        System.out.println("Ano de Contratação: "+funcionario.getAnoContrato());
        System.out.println("CHECANDO APTIDAO PARA PROMOÇAO....");
        funcionario.aumentoSalario(funcionario.getSalario());
    }
    
}
