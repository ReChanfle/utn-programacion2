//
// Created by sebas on 27/08/2025.
//

#include <iostream>
#include "../Semana2/ejercicio2.h"
#include <ctime>

//Crear una clase llamada Dado que simule el comportamiento de un dado de seis caras.
//La clase debe contener los siguientes atributos:
//valor (int): Almacena el valor actual del dado (un número entre 1 y 6).
//Implementar los siguientes métodos públicos:
//Dado(): Constructor que inicializa el dado con un valor aleatorio entre 1 y 6.
//lanzar(): Simula el lanzamiento del dado, asignando un nuevo valor aleatorio entre 1 y 6 al atributo valor.
//getValor(): Devuelve el valor actual del dado.
//esMaximo(): Devuelve true si el valor del dado es 6, y false en caso contrario.
//esMinimo(): Devuelve true si el valor del dado es 1, y false en caso contrario.

using namespace std;

void Dado::throwDice()
{
    const int randomV = rand() % 6 + 1;
    this->value = randomV;
}

int Dado::getValue()
{

    return this->value;

}

bool Dado::isMaximum() const
{
    if (this->value > 5)
        return true;

    return false;
}
bool Dado::isMinimum() const
{
    if (this->value < 2)
        return true;

    return false;
}



int main()
{
    srand(std::time(0));
    Dado dice{};


    cout << "El valor del dado es: " << dice.getValue() << endl;
    dice.throwDice();
    cout << "Se lanzo el dado, el nuevo valor es: " << dice.getValue() << endl;
    cout << "Es maximo?: " << dice.isMaximum() << endl;
    cout << "Es minimo?: " << dice.isMinimum() << endl;


    return 0;
}

