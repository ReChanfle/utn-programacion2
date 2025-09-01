#include <iostream>
#include "../Semana2/ejercicio6.h"
#include <vector>
using namespace std;
//
// Created by sebas on 29/08/2025.
//


//Escribe un programa que solicite al usuario ingresar una lista de 10 números enteros.
//Luego, el programa debe mostrar los números pares distintos que se ingresaron.
//Para resolver este ejercicio, deberás implementar una función que reciba un vector de enteros y su tamaño,
//y que devuelva un puntero a un vector dinámico que contenga solo los números pares distintos del vector recibido.

int* getIntegers(int vec[], int &count)
{
    int vecAux[10]{};
    count = 0; // cantidad de pares encontrados

    for (int i = 0; i < 10; i++)
    {
        if (vec[i] % 2 == 0)
        {
            bool canSave = true;


            for (int x = 0; x < count; x++)
            {
                if (vec[i] == vecAux[x])
                {
                    canSave = false;
                    break;
                }
            }

            if (canSave)
            {
                vecAux[count] = vec[i];
                count++;
            }
        }
    }

    int *pairs = new int[count];
    for (int i = 0; i < count; i++)
    {
        pairs[i] = vecAux[i];
    }

    return pairs;
}


int main()
{

    int vec[10]{};
    int counter = 0;
    for (int i = 0; i < 10; i++)
    {
        int number = 0;
        cout<<"Ingrese su numero: " << endl;
        cin>>number;
        vec[i] = number;
    }

    int *pairs = getIntegers(vec, counter);

    cout << "Numeros pares (sin duplicados): ";
    cout << counter << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << pairs[i] << " ";
    }

    delete[] pairs;

    return 0;

}