#include <iostream>

using namespace std;

/*
Crie uma classe denominada Elevador para armazenar as informações de um elevador dentro de um prédio. 
A classe deve armazenar o andar atual (0 = térreo), total de andares no prédio, excluindo o térreo, 
capacidade do elevador, e quantas pessoas que estão presentes nele.
A classe deve implementar a seguinte interface:
	Construtor: Deve receber como parâmetros: a capacidade do elevador e o total de andares no prédio 
	(os elevadores sempre começam no térreo e vazios); **

	entra: Acrescenta uma pessoa no elevador (só deve acrescentar se ainda houver espaço);

	sai: para remover uma pessoa do elevador (só deve remover se houver alguém dentro dele);

	sobe: para subir um andar (não deve subir se já estiver no último andar);

	desce: para descer um andar (não deve descer se já estiver no térreo);

	Métodos de acesso aos atributos: retorna o valor de cada atributo da classe. Crie um método para cada atributo
*/
class Elevador{
private:
	unsigned int andar_atual;
	unsigned int andar_total;
	unsigned int capacidade_pessoas;
	unsigned int pessoas_presentes;

public:
	Elevador(unsigned int andar_total, unsigned int capacidade_pessoas){						   // Construtor
		this->andar_atual = 0; // inicia no térreo -> 0 andar
		this->andar_total = andar_total;
		this->capacidade_pessoas = capacidade_pessoas;
		this->pessoas_presentes = 0; // inicia vazio
	}

	void entra(){
		if(capacidade_pessoas > pessoas_presentes){
			pessoas_presentes++;
		}else{
			cout << "Elevador Cheio!!!" << endl;
		}
	}

	void sai(){
		if(pessoas_presentes != 0){
			pessoas_presentes--;	
		}else{
			cout << "Não há pessoas dentro do elevador!!!" << endl;
		}
	}

	void sobe(){
		if(andar_atual != andar_total){
			andar_atual++;
		}else{
			cout << "Elevador no Andar Final!!!" << endl;
		}
	}

	void desce(){
		if(andar_atual != 0){
			andar_atual--;
		}else{
			cout << "Elevador no Terreo!!!" << endl;
		}
	}

	// Metodo de Acesso Get para variáveis que mudam
	unsigned int getTotalPessoasPresentes(){
		return pessoas_presentes;
	}
	unsigned int getAndarAtual(){
		return andar_atual;
	}	
	unsigned int getCapacidadeMaxPessoas(){
		return capacidade_pessoas;
	}
	unsigned int getTotalAndares(){
		return andar_total;
	}
	
};

int main() {

	cout << "Hello, world!!!" << endl;

	Elevador Elevador(5,7);

	// Teste resultado final esperado -> 
	Elevador.entra();
    Elevador.entra();
	cout << "Pessoas Presentes: " << Elevador.getTotalPessoasPresentes() << endl;	// 2 pessoas
	cout << "Andar Atual: " << Elevador.getAndarAtual() << endl;					// Andar 0
    Elevador.sobe();
    Elevador.sobe();
	Elevador.sobe();
	cout << "Andar Atual: " << Elevador.getAndarAtual() << endl;					// 3° andar
    Elevador.sai();
	Elevador.sai();
	cout << "Pessoas Presentes: " << Elevador.getTotalPessoasPresentes() << endl;	// 0 Pessoas
	Elevador.entra();
    Elevador.desce();
	cout << "Andar Atual: " << Elevador.getAndarAtual() << endl;
	Elevador.sai();
	
	cout << "Pessoas Presentes: " << Elevador.getTotalPessoasPresentes() << endl;
	cout << "Andar Atual: " << Elevador.getAndarAtual() << endl;
	cout << "Quantidade total de Andares: " << Elevador.getTotalAndares() << endl;
	cout << "Capacidade maxima pessoas: " << Elevador.getCapacidadeMaxPessoas() << endl;

	Elevador.sai(); //  mensagem de não tem mais ninguem dentro!
	
	return 0;
}