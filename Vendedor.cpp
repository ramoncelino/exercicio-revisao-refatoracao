#include "Vendedor.hpp"

class Vendedor : public Empregado {
  	
	double quotaTotalAnual() {
	  return getqMV() * 12;
	}
	
	public:
	Vendedor (std::string n, double sh, double qMV) : Empregado(n, sh, qMV){	}
	
	void imprime_info (double h){
		
		 std::cout << "Nome: " << getnome() << std::endl;
         std::cout << "Salario Mes: " << pagamentoMes(h) << std::endl;  
         std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;  
         std::cout << std::endl;
	}

};

