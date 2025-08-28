//
// Created by sebas on 27/08/2025.
//

#include <iostream>
#include "../Semana2/ejercicio4.h"

using namespace std;

//Crear una clase llamada Triangulo que represente un triángulo.
//La clase debe contener un vector de 3 elementos, donde cada elemento corresponde a la longitud de un lado del triángulo.
//Implementar los siguientes métodos:
//getLado(int numero): Devuelve la longitud del valor del lado correspondiente al número proporcionado (1, 2, o 3).
//Si el número es incorrecto (fuera del rango 1-3), devuelve cero.
//setLado(int numero, float valor): Establece el valor del lado correspondiente al número proporcionado (1, 2, o 3).
//Si el número es incorrecto (fuera del rango 1-3), no realiza ninguna acción.
//getTipo(): Devuelve el tipo de triángulo según sus lados:
// para un triángulo equilátero (todos los lados iguales).
//2 para un triángulo isósceles (dos lados iguales).
//3 para un triángulo escaleno (todos los lados diferentes).
//isEscaleno(): Devuelve true si el triángulo es escaleno, false en caso contrario.
//isIsosceles(): Devuelve true si el triángulo es isósceles, false en caso contrario.
//isEquilatero(): Devuelve true si el triángulo es equilátero, false en caso contrario.

float Triangle::getSide(int side) const
{
    if (side<1 || side>3)
        return 0;

    side = side -1;

   return this->sides[side];
}

void Triangle::setSide(int side, float value)
{
    if (side<1 || side>3)
        return;

    side = side -1;

    this->sides[side]=value;
}

int Triangle::getType()
{
    float side1{0}, side2{0}, side3{0};
    const float* sides = this->sides;

    for (int i=0;i<3;i++)
    {
        if (side1 == 0)
            side1 = sides[i];
        if (side2 == 0)
            side2 = sides[i];
        if (side3 == 0)
            side3 = sides[i];
    }

    if (side1 == side2 && side2 == side3)
        return 1;

    if (side1 == side2 || side2 == side3)
        return 2;

    if (side1 != side3 && side2 != side3)
        return 3;


}

bool Triangle::isEscaleno()
{
    if (getType() == 3)
        return true;

    return false;
}

bool Triangle::isIsosceles()
{
    if (getType() == 2)
        return true;

    return false;
}

bool Triangle::isEquilatero()
{
    if (getType() == 1)
        return true;

    return false;
}


int main()
{
    Triangle triangle{};
    int side = 0;
    float lenght  = 0;

    for (int i=0;i<3;i++)
    {
        cout << "Ingrese lado del triangulo(1,2 0 3): " << endl;
        cin >> side;
        cout << "Ingrese largo del lado: " << endl;
        cin >> lenght;
        triangle.setSide(side, lenght);
    }

    cout << "El triangulo es : " << endl;
    cout << "Escaleno:" << triangle.isEscaleno() << endl;
    cout << "Isosceles: " << triangle.isIsosceles() << endl;
    cout << "Equilatero: " << triangle.isEquilatero() << endl;

    return 0;
}