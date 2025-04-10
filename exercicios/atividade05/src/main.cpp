#include <iostream>

using namespace std;

/*
Implemente uma classe para abstrair uma televisão. A televisão tem um controle de volume do som e um controle de seleção de canal.

A classe implementada deve atender aos seguintes requisitos mínimos:

1° - O controle de volume permite aumentar ou diminuir a potência do volume de som em uma unidade de cada vez.
2° - A potência do volume deve ter valores discretos no intervalo [0 , 100].
3° - O controle de canal também permite aumentar e diminuir o número do canal em uma unidade
4° - A interface também deve possibilitar a trocar para um canal indicado.
5° - 0s canais dever ter valores discretos no intervalo [0 , 75].

6° - Também devem existir métodos para consultar o valor do volume de som e o canal selecionado.

7° - Caso julgar necessário, adicione na interface desta abstração, outros comportamentos que julgar necessários

Elabore um programa para realizar o teste da sua abstração. Lembre-se de realizar um teste completo da sua interface.
*/

class Televisao{
private:
	unsigned int _volume;
	unsigned int _canal;


public:
	Televisao(unsigned int volume, unsigned int canal){
		if(volume >= 0 && volume <= 100){
			_volume = volume;
		} else{
			_volume = 35;
		}
		if(canal >= 0 && canal <= 75){
			_canal = canal;
		} else{
			_canal = 12;
		}
	}
	
	void aumentaVolume(){
		if (_volume < 100){
			_volume++;
		}
	}

	void diminuiVolume(){
		if (_volume > 0){
			_volume--;
		}
	}

	void aumentaCanal(){
		if (_canal < 75){
			_canal++;
		}
	}

	void diminuiCanal(){
		if (_canal > 0){
			_canal--;
		}
	}

	void trocaCanal(unsigned int newCanal){
		if(newCanal >= 0 && newCanal <= 75){
			_canal = newCanal;
		}else{
			cout << "Fora dos Canais Disponiveis" << endl;
		}
		
	}

	void consultaVolume(){
		cout << "Volume: "  << _volume << endl;
	}

	void consultaCanal(){
		cout << "Canal: "  << _canal << endl;
	}
};



int main() {

	Televisao tv(125, 15);

	tv.consultaVolume();
	tv.consultaCanal();

	tv.aumentaVolume();
	tv.aumentaVolume();
	tv.diminuiVolume();
	tv.aumentaCanal();
	tv.aumentaCanal();

	tv.consultaVolume();
	tv.consultaCanal();

	tv.trocaCanal(70);
	tv.trocaCanal(80); // deve mostrar erro

	tv.consultaVolume();
	tv.consultaCanal();

	return 0;
}