#include <iostream>
#include "../Semana3/ejercicio1.h"

using namespace std;

//Crear una clase llamada Rectangulo que represente un rectángulo.
//La clase debe tener dos atributos correspondientes a la base y altura. Implementar los siguientes métodos:
//Getters y Setter de cada atributo.
//calcularArea(): Devuelve el área del rectángulo.
//calcularPerimetro(): Devuelve el perímetro del rectángulo.



int main()
{
    float width, height;

    cout << "Ingrese largo: " << endl;
    cin >> width;
    cout << "Ingrese ancho: " << endl;
    cin >> height;

    Rectangle rec{width, height};

     float area = rec.Area();
    float perim = rec.Perimeter();

    cout << "El area es: " << area << endl;
    cout << "El perimeter es: " << perim << endl;


    return 0;




}