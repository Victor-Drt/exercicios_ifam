/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package modelo;

/**
 *
 * @author victo
 */
public class Funcionario {
    //ATRIBUTOS
    private String nome;
    private String departamento;
    private float salario;
    private int anoContrato;
    

   
   Funcionario(String nome, String departamento, float salario, int anoContrato){
       this.nome = nome; //Nome do Funcionario
       this.departamento = departamento; //Departamento em que atua
       this.salario = salario; //Salario
       this.anoContrato = anoContrato; //Ano de Contratação
   }
   
   public Funcionario(){
       
   }

   
   //METODOS GET E SET

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getDepartamento() {
        return departamento;
    }

    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }

    public float getSalario() {
        return salario;
    }

    public void setSalario(float salario) {
        this.salario = salario;
    }

    public int getAnoContrato() {
        return anoContrato;
    }

    public void setAnoContrato(int anoContrato) {
        this.anoContrato = anoContrato;
    }
   
    //METODOS
    
    public void aumentoSalario(float salario){
    /*esse metodo vai verificar se o Funcionario esta na empresa antes de 2018
      e vai dar uma promoção e aumento de 25% no salario atual;
    */
        if(this.anoContrato < 2018){
            this.salario = salario+(salario*25/100);
            System.out.println("Pronto para promoçao! Reajuste de 25% no salario.");
            System.out.println("Novo Salario: R$"+this.salario+"\n");
        }else{
            System.out.println("Inapto para promoção!!\n");
        }
    }
    
}
