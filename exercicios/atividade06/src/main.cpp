#include <iostream>

using namespace std;

/*
Implemente a abstração de um equipamento de ar condicionado, com os seguintes requisitos:

O condicionador possui 10 potências diferentes.
Cada unidade da potência do condicionador diminui a temperatura do ambiente em 1.8° C.
A variação que o condicionador consegue causar está no intervalo [0° C - 18° C], ou seja, 
zero graus de variação quando desligado e dezoito graus de variação quando ligado na potência máxima.

Através de um sensor, o condicionador é informado da temperatura externa. Dada essa temperatura 
e a potência selecionada, o condicionador calcula e retorna a temperatura do ambiente.


No programa principal, crie dois condicionadores. Informe duas temperaturas externas diferentes 
para cada um (ex: 25° C e 31° C), ajuste o segundo em potência máxima (10) e o primeiro em potência média (5). 
Finalmente, exiba a temperatura resultante de cada ambiente.
*/

class ArCondicionado{
private:
	unsigned int _potencia; // [0 - 10] cada unidade significa -1.8°C
	float _tempExt;


public:
	ArCondicionado(unsigned int potencia, float temp){
		setPotencia(potencia);
		setTempExterna(temp);
	}

    // Ajusta a potência com validação
    void setPotencia(unsigned int potencia) {
        if (potencia <= 10) {
            _potencia = potencia;
        } else {
            _potencia = 0; // Desligado
        }
    }

	void setTempExterna(float temp) {
        _tempExt = temp;
    }


	void exibirTempAmbiente(){
		// Cada potencia = 1.8 °C
		float reducao = _potencia * 1.8;

		if (reducao > 18) {
			reducao = 18;
		}
		// Temperatura ambiente do ar
		//float tempAmb = _tempExt - reducao;

		cout << "Temperatura ambiente: " << (_tempExt - reducao) << "°C" << endl;
	}
};


int main() {

	ArCondicionado place1(5, 25);
	ArCondicionado place2(10, 31);
	
	cout << "Ambiente 1 -> ";
    place1.exibirTempAmbiente();

    cout << "Ambiente 2 -> ";
    place2.exibirTempAmbiente();


	return 0;
}