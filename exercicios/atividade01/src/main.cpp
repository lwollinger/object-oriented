#include <iostream>

using namespace std;

/*
Exercício 01
Crie uma classe Pessoa para representar uma pessoa, com os atributos privados de nome, idade e altura. 
Crie os métodos públicos necessários para acessar e modificar os atributos desta classe e crie um método para imprimir os dados da pessoa.
Implemente um programa de teste que utilize toda a interface da classe criada.
*/

class Pessoa{		// Classe principal
private:
	string name;			// Atributos
	unsigned int age;		// Atributos
	float high;				// Atributos

public:
	Pessoa(string name, unsigned int age, float high){ 	// Construtor
		this->name = name;
		this->age = age;
		this->high = high;
	}

	// Metodos SET
	void setname(string newName){
		name = newName;
	}

	void setage(unsigned int newAge){
		age = newAge;
	}

	void sethigh(float newHigh){
		high = newHigh;
	}

	// Metodo GET
	string getname(){
		return name;
	}

	unsigned getage(){
		return age;
	}

	float gethigh(){
		return high;
	}

	// imprimir dados
	void showData(){
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "High: " << high << endl;
	}
};



int main() {

	cout << "Hello, world!!!" << endl;

	// Criando objeto 
	Pessoa pessoa1("Lucas", 21, 1.80);
	// Imprimindo dados
	pessoa1.showData();
	
	// Função get para mudar parâmetros
	pessoa1.setname("Mateus");
	pessoa1.setage(18);
	pessoa1.sethigh(1.75);
	// Imprimindo novas mudanças dos parâmetros
	pessoa1.showData();

	return 0;
}