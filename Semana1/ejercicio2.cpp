#include <iostream>
using namespace std;


//Crear un programa que contenga un menú con las siguientes opciones:
//1- Cargar Vector: El programa debe solicitar al usuario la cantidad de elementos que va a cargar,
//posteriormente se solicitara cuales son dichos números para almacenarlos en un vector utilizando asignación
//dinámica de memoria.
//2- Mostrar Vector: En caso de tener cargado el vector, debe mostrarlo por pantalla.
//3- Salir: Sale del programa (no olvidar liberar la memoria)
//Pista: Recordar que se puede inicializar un puntero con el valor nullptr

int  defineSize()
{
    int quantity = 0;
    cout << "Ingrese cantidad: " << endl;
    cin >> quantity;

    return quantity;
}

void loadAndShowArray(int vec[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int number = 0;
        cout << "Cargar valor: "  << endl;
        cin >> number;
        vec[i] = number;
    }


    for (int i = 0; i < length; i++)
    {
        cout << "Mostrando valores: " << vec[i] << endl;
    }

}


int main() {

    int quantity = defineSize();
    int *vecInt = new int[quantity];

    if (vecInt == nullptr)
    {
        cout << "Mem Error!" << endl;
        return -1;
    }

    loadAndShowArray(vecInt, quantity);

    delete [] vecInt;

    return 0;

}