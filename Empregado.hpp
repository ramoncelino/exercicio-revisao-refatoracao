#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
    private:
    std::string nome;
    double salarioHora;  
    double quotaMensalVendas;  
    
    public:
	Empregado (std::string n, double sh, double qMV){
		
		nome = n;
		salarioHora = sh;
		quotaMensalVendas = qMV;
		
	}
	
	Empregado (std::string n, double sh){
		
		nome = n;
		salarioHora = sh;
		
	}

    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }
    
    	std::string getnome(){
		return nome;
	}
    
    	double getsh(){
		return salarioHora;
	}
	
	  	double getqMV(){
		return quotaMensalVendas;
	}
	
		void setnome(std::string newname){
		nome = newname;
	}
	
		void setsh( double newsh){
		salarioHora = newsh;
	}
	
		void setqMV( double newqMV){
		quotaMensalVendas = newqMV;
	}
};

#endif
