#include <iostream>
#include <math.h>

using namespace std;

/*
Definir uma classe que abstraia um círculo

Esta classe deve possuir métodos Privados para:
- calcular a área do cı́rculo;
- calcular a distância entre os centros de 2 cı́rculos;
- calcular a circunferência do cı́rculo.

E métodos Públicos para:
- definir o raio do cı́rculo, dado um número real;
- aumentar o raio do cı́rculo, dado um percentual de aumento;
- definir o centro do cı́rculo, dada uma posição (X,Y);
- imprimir o valor do raio;
- imprimir o centro do cı́rculo.
- imprimir a área do cı́rculo.

Criar um programa principal para testar a classe.
*/

class Circulo{
private:
	float _raio;
	int _posX;
	int _posY;

	float calculaArea(){
		return M_PI * _raio * _raio;
	}
	
	float calculaCircunferencia(){
		return 2 * M_PI * _raio;
	}

	float calculaDistancia(Circulo &circulo){
		return sqrt(pow(circulo._posX - _posX, 2) + pow(circulo._posY - _posY, 2));
	}

	
public:
	Circulo(float valorRaio){	//construtor
		defineRaio(valorRaio);
		_posX = 0;
		_posY = 0;
	}

	void defineRaio(float newRaio){
		_raio = newRaio;
	}

	void aumentaRaio(float percentualAumento){
		percentualAumento = percentualAumento / 100;
		_raio = _raio + (_raio * percentualAumento);	// atribuindo o novo valor do raio
	}

	// definir o centro do cı́rculo, dada uma posição (X,Y);
	void centroCirculo(int posX, int posY){
		_posX = posX;
		_posY = posY;
	}

	void imprimeRaio(){
		cout << "raio:" << _raio << endl;
	}

	void imprimeCentroCirculo(){
		cout << "Posição:" << "("<< _posX << "," << _posY << ")"<< endl;
	}

	void imprimeArea(){
		float valorArea = calculaArea();
		cout << "Area:" << valorArea << endl;
	}


};


int main() {

	Circulo c1(4);
	c1.centroCirculo(0, 0);

	Circulo c2(3);
	c2.centroCirculo(3, 4);

	cout << "--- Círculo 1 ---" << endl;
	c1.imprimeRaio();
	c1.imprimeCentroCirculo();
	c1.imprimeArea();
	//c1.imprimeCircunferencia();

	cout << "\n--- Círculo 2 ---" << endl;
	c2.imprimeRaio();
	c2.imprimeCentroCirculo();
	c2.imprimeArea();

	cout << "\n--- Distância entre os círculos ---" << endl;
	//float distancia = 
	// perguntar pro professor

	cout << "\n--- Aumentando o raio do Círculo 1 em 50% ---" << endl;
	c1.aumentaRaio(50);
	c1.imprimeRaio();
	c1.imprimeArea();

	return 0;
}