#include <iostream>
using namespace std;

//Escribe un programa que solicite al usuario el tamaño de un array de enteros,
//lo cree dinámicamente utilizando new,
//el usuario debe poder cargar el array y mostrarlo,
//y luego libere la memoria con delete


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

	if (*vecInt === nullptr)
	{
		cout << "Mem Error!" << endl;
		return -1;
	}

	loadAndShowArray(vecInt, quantity);

	delete [] vecInt;

    return 0;

}