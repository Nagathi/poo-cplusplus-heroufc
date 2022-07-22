#include <iostream>
#include <string.h>

using namespace std;

class Lutador{
	
	private:
		string nome;
		string nacionalidade;
		int idade;
		float altura;
		float peso;
		string categoria;
		int vitorias;
		int derrotas;
		int empates;
		
	public:
		
		Lutador(string nome,
				string nacionalidade, 
				int idade,
				float altura, 
				float peso,
				int derrotas, 
				int vitorias, 
				int empates)
		{
				   	
			this->nome          =   nome;
			this->nacionalidade =   nacionalidade;
			this->idade         =   idade;
			this->altura        =   altura;
			this->peso          =   peso;
			this->derrotas      =   derrotas;
			this->vitorias      =   vitorias;
			this->empates       =   empates;
			
			if(this->peso < 52.2) {
				this->categoria = "Inválido";
			}else if(peso <= 70.3) {
				this->categoria = "Leve";
			}else if(peso <= 83.9) {
				this->categoria = "Médio";
			}else if(peso <= 120.2) {
				this->categoria = "Pesado";
			}else {
				this->categoria = "Inválido";
			}
		}
		
		string getNome(){
			return this->nome;
		}
		void setNome(string nome){
			this->nome = nome;
		}
		
		string getNacionalidade(){
			return this->nacionalidade;
		}
		void setNacionalidade(string nacionalidade){
			this->nacionalidade = nacionalidade;
		}
		
		int getIdade(){
			return this->idade;
		}
		void setIdade(int idade){
			this->idade = idade;
		}
		
		float getAltura(){
			return this->altura;
		}
		void setAltura(float altura){
			this->altura = altura;
		}
		
		float getPeso(){
			return this->peso;
		}
		void setPeso(float peso){
			this->peso = peso;
		}
		
		string getCategoria(){
			return this->categoria;
		}
		void setCategoria(string altura){
			this->categoria = categoria;
		}
		
		int getVitorias(){
			return this->vitorias;
		}
		void setVitorias(int vitorias){
			this->vitorias = vitorias;
		}
		
		int getDerrotas(){
			return this->derrotas;
		}
		void setDerrotas(int derrotas){
			this->derrotas = derrotas;
		}
		
		int getEmpates(){
			return this->empates;
		}
		void setEmpates(int empates){
			this->empates = empates;
		}
		
		void apresentar();
		void status();
		void ganharLuta();
		void perderLuta();
		void empatarLuta();
};
		
		
void Lutador::apresentar() {
	cout << "Nome:......... " << this->nome		  << endl;
	cout << "Nacionalidade: " << this->nacionalidade << endl;
	cout << "Idade:........ " << this->idade         << endl;
	cout << "Altura:....... " << this->altura        << endl;
	cout << "Peso:......... " << this->peso          << endl;
	cout << "Categoria:.... " << this->categoria     << endl;
	cout << "Derrotas:..... " << this->derrotas      << endl;
	cout << "Vitórias:..... " << this->vitorias      << endl;
	cout << "Empates:...... " << this->empates       << endl;
}
	
void Lutador::status() {
		
		cout << "Categoria: " << this->categoria << endl;
		cout << "Vitórias:. " << this->vitorias  << endl;
		cout << "Derrotas:. " << this->derrotas  << endl;
		cout << "Empates:.. " << this->empates   << endl;
}

void Lutador::ganharLuta() {
		this->vitorias = vitorias+1;
}
void Lutador::perderLuta() {
		this->derrotas = derrotas+1;
}
void Lutador::empatarLuta() {
		this->empates = empates+1;
}

		

