#include <iostream>

using namespace std;
/*
Implemente ua abstração de um carro. 
* O tanque de combustı́vel do carro armazena no máximo 50 litros de gasolina.
* O carro consome 15 km/litro. Deve ser possı́vel:

Abastecer o carro com uma certa quantidade de gasolina;
Mover o carro em uma determinada distância (medida em km);
Retornar a quantidade de combustı́vel e a distância total percorrida.
Elabore um programa para realizar o teste da sua abstração. Lembre-se de realizar um teste completo da sua interface.

*/

class Carro{
private:
    float _combustivelAtual; 
    float _distanciaPercorrida; // Em km
    const float _consumo = 15.0; // km/litro
    const float _tanqueMax = 50.0; // litros

public:
    Carro(){
        _combustivelAtual = 0;
        _distanciaPercorrida = 0;
    }

    // Abastece o carro sem ultrapassar a capacidade do tanque
    void abastecer(float litros){
        if (litros >= 0 && litros <= 50){
			_combustivelAtual = _combustivelAtual + litros;
		}
        if (_combustivelAtual > _tanqueMax){
			_combustivelAtual = _tanqueMax;
		}
    }

	void kilometros(float kilometros){
		float gastoGasolina = kilometros / _consumo;
		if (gastoGasolina <= _combustivelAtual) {
			_combustivelAtual = _combustivelAtual - gastoGasolina;
			_distanciaPercorrida = _distanciaPercorrida + kilometros;
			cout << "Carro percorreu " << kilometros << " km." << endl;
		} else {
			cout << "Combustível insuficiente para andar" << kilometros << " km." << endl;

		}
	}

    float getCombustivel(){
        return _combustivelAtual;
    }

    float getDistancia(){
        return _distanciaPercorrida;
    }
};


int main() {
    Carro meuCarro;

    cout << "Abastecendo com 20 litros..." << endl;
    meuCarro.abastecer(20);
    cout << "Combustível atual: " << meuCarro.getCombustivel() << " L\n" << endl;

    cout << "Andar 100 km" << endl;
    meuCarro.kilometros(100);
    cout << "Combustível restante: " << meuCarro.getCombustivel() << " L" << endl;
    cout << "Distância total percorrida: " << meuCarro.getDistancia() << " km\n" << endl;

    cout << "Andar 250 km" << endl;
    meuCarro.kilometros(250); // Deve falhar por falta de combustível
    cout << "Combustível restante: " << meuCarro.getCombustivel() << " L" << endl;
    cout << "Distância total percorrida: " << meuCarro.getDistancia() << " km\n" << endl;

    cout << "Abastecendo mais 40 litros" << endl; // (ultrapassa o limite)
    meuCarro.abastecer(40);                       // Total daria 60, mas limita a 50
    cout << "Combustível atual: " << meuCarro.getCombustivel() << " L\n" << endl;

    cout << "Andar 300" << endl;
    meuCarro.kilometros(300); // Deve conseguir
    cout << "Combustível restante: " << meuCarro.getCombustivel() << " L" << endl;
    cout << "Distância total percorrida: " << meuCarro.getDistancia() << " km" << endl;

    return 0;
}