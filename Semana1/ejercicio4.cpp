#include <iostream>
using namespace std;



//Hacer una función que reciba un vector de enteros y su tamaño
//y devuelva la cantidad de números distintos que se repiten en el vector.

int displayNumbers(int vecInt[], int size)
{
    int distinct = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = size; j > i; j--)
        {
           if (vecInt[i] == vecInt[j])
           {
               distinct++;
           }
        }

    }

    return distinct;
}

void loadVec(int vecNum[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int num = 0;
        cout << "Ingrese numero: "<< endl;
        cin >> num;
        vecNum[i] = num;
    }
}


int main()
{
    int size = 0;
    int distinct = 0;

    cout << "Ingrese largo del vector: " << endl;
    cin >> size;
    int *vec = new int[size];

    if (vec == nullptr)
    {
        cout << "Error de memoria" << endl;
        exit(-1);
    }

    loadVec(vec, size);
    distinct = displayNumbers(vec, size);

    cout << "Cantidad de numeros repetidos: " << distinct << endl;

    delete[] vec;


    return 0;



}