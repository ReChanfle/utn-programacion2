#include <iostream>
#include "../Semana2/ejercicio1.h"

using namespace std;

//Crear una clase llamada Rectangulo que represente un rectángulo.
//La clase debe tener dos atributos correspondientes a la base y altura.
//Implementar los siguientes métodos:
//Getters y Setter de cada atributo.
//calcularArea(): Devuelve el área del rectángulo.
//calcularPerimetro(): Devuelve el perímetro del rectángulo.

float Ejercicio1::getHeight() const
{
    return this->height;
}

float Ejercicio1::getWidth() const
{
    return this->width;
}



void Ejercicio1::setRectangle(float width, float height)
{
        this->width = width;
        this->height = height;
}


float Ejercicio1::calculateArea(float width, float height)
{
    return width*height;
}

float Ejercicio1::calculatePerimeter(float width, float height)
{
    return 2 * (width+height);
}


int main()
{

    float width, height;

    cout << "Ingrese el largo del rectangulo: " << endl;
    cin >> width;
    cout << "Ingrese el largo del rectangulo: " << endl;
    cin >> height;

    Ejercicio1 rectangle{};

    rectangle.setRectangle(width, height);

    float area = Ejercicio1::calculateArea(rectangle.getWidth(), rectangle.getHeight());
    float perimeter = Ejercicio1::calculatePerimeter(rectangle.getWidth(), rectangle.getHeight());

    cout << "El area del rectangulo es: " << area << endl;
    cout << "El perimetro del rectangulo es: " << perimeter << endl;

    return 0;

}