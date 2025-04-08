#include <iostream>

using namespace std;

/*
Crie uma classe em C++ chamada Relogio para armazenar um horário, composto por hora, minuto e segundo. 
A classe deve representar esses componentes de horário e deve apresentar os métodos descritos a seguir:

1° - um método chamado setHorario, que deve receber o horário desejado por parâmetro (hora, minuto e segundo);

2° - um método chamado getHorario para retornar o horário atual, através de 3 variáveis passadas por referência;

3° - um método chamado tick para avançar o horário para o próximo segundo (lembre-se de atualizar o minuto e a hora, quando for o caso).
*/

class Relogio{
private:
	unsigned int hora;
	unsigned int minuto;
	unsigned int segundo;

public:
	Relogio(unsigned int hora, unsigned int minuto, unsigned int segundo){
		this->hora = hora;
		this->minuto = minuto;
		this->segundo = segundo;
	}

	void setHorario(unsigned int newHora, unsigned int newMinuto, unsigned int newSegundo){
		hora = newHora;
		minuto = newMinuto;
		segundo = newSegundo;
	}

	void getHorario(){

	}

	void tick(){
		segundo++;
		if(segundo == 60){
			segundo = 0;
			minuto++;
		}
		if(minuto == 60){
			minuto = 0;
			hora++;
		}
		if(hora == 24){
			hora = 0;
		}
	}


};

int main() {


	cout << "Hello, world!!!" << endl;

	return 0;
}