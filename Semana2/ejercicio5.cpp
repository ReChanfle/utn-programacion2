//
// Created by sebas on 28/08/2025.
//

#include <iostream>
#include "../Semana2/ejercicio5.h"

using namespace std;

//Hacer una función que reciba un vector de enteros y su tamaño
// y luego muestre el vector ordenado de forma ascendente,
//tener en cuenta que el vector enviado como argumento no debe ser modificado.


void OrdenarVector::orderAsc(int *vec,int size)
{

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }

}

void OrdenarVector::orderDesc(int *vec, int size)
{

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (vec[j] < vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}

void OrdenarVector::show(int *vec, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << vec[i] << " ";
    }
}


int main()
{
    int size = 0;
    cout << "Ingrese tamano de vector: " << endl;
    cin >> size;

    int* _vecInt = new int[size];

    if (_vecInt == nullptr)
        exit(1);

    for (int i = 0; i < size; i++)
    {
        int number = 0;
        cout << "Ingrese el numero que quiere guardar: " << endl;
        cin >> number;
        _vecInt[i] = number;

        cout <<  _vecInt[i] << endl;
    }

    OrdenarVector ordenarVec{};

    ordenarVec.orderAsc(_vecInt, size);
    ordenarVec.show(_vecInt, size);

    delete[] _vecInt;


    return 0;


}

