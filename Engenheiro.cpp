#include "Engenheiro.hpp"

class Engenheiro : public Empregado {

    private:	
	int projetos;
	
	public:
	Engenheiro (std::string n, double sh, int p) : Empregado(n, sh){
	
	projetos = p;
    }
	 	
	void imprime_info(double h){
		
		  std::cout << "Nome: " << getnome() << std::endl;
          std::cout << "Salario Mes: "  << pagamentoMes(h) << std::endl;
          std::cout << "Projetos: "     << projetos << std::endl;  
          std::cout << std::endl;
          
	}
	
	int getprojetos(){
		return projetos;
	}

		void setprojetos(int newnumber){
		projetos = newnumber;
	}
};

