//
// Created by sebas on 28/08/2025.
//

#include <iostream>
#include "../Semana2/ejercicio5.h"

using namespace std;

//Hacer una función que reciba un vector de enteros y su tamaño
// y luego muestre el vector ordenado de forma ascendente,
//tener en cuenta que el vector enviado como argumento no debe ser modificado.


void OrdenarVector::orderAsc()
{

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (_vecInt[j] > _vecInt[j + 1]) {
                int temp = _vecInt[j];
                _vecInt[j] = _vecInt[j + 1];
                _vecInt[j + 1] = temp;
            }
        }
    }

}

void OrdenarVector::orderDesc()
{

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (_vecInt[j] < _vecInt[j + 1]) {
                int temp = _vecInt[j];
                _vecInt[j] = _vecInt[j + 1];
                _vecInt[j + 1] = temp;
            }
        }
    }
}

void OrdenarVector::show()
{
    for (int i = 0; i < 10; i++)
    {
        cout << " " << _vecInt[i] << " ";
    }
}


int main()
{
    int vector[10]{1,5,4,3,1,7,8,4,9,4};
    OrdenarVector vecInt{vector};


    vecInt.orderAsc();
    vecInt.show();


    return 0;


}

