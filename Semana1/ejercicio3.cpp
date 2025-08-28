#include <iostream>
using namespace std;


//Hacer un programa que solicite al usuario 10 números y
//muestre primero los números positivos y luego los negativos.
//El programa debe crear dos arrays dinámicos con la cantidad exacta en cada caso:
//uno para almacenar los números positivos y otro para los números negativos.

void loadNumber(int vecNum[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un numero:" << endl;
        cin >> vecNum[i];
    }
}

int checkSign(int vecNum[], char flag = '+')
{
    int quantityNumber = 0;

    switch (flag)
    {
    case '+':
        for (int i = 0; i < 10; i++)
        {
            if (vecNum[i] > 0)
                quantityNumber++;
        }
        break;
    case '-':
        for (int i = 0; i < 10; i++)
        {
            if (vecNum[i] < 0)
                quantityNumber++;
        }
        break;
    default:
        break;
    }

    return quantityNumber;
}

void checkMem(int vecNum[])
{
    if (vecNum == nullptr)
    {
        cout << "Error de memoria" << endl;
        exit(-1);
    }
}

void showNum(int vec[], const int quantity, const char flag = '+')
{
    int quantityNumber = 0;
    for (int i = 0; i < quantity; i++)
    {
        quantityNumber++;
    }
    cout << quantityNumber << "numeros de signo: " << flag;
}


int main()
{
    int vecNum[10]{};
    int quantityNegatives = 0;
    int quantityPositives = 0;
    loadNumber(vecNum);

    quantityPositives = checkSign(vecNum, '+');
    quantityNegatives = checkSign(vecNum, '-');

    int *vecPositives = new int[quantityPositives]{1};
    checkMem(vecPositives);
    int *vecNegatives = new int[quantityNegatives]{1};
    checkMem(vecNegatives);

    showNum(vecPositives, quantityPositives, '+');
    showNum(vecNegatives,  quantityNegatives, '-');

    delete[] vecPositives;
    delete[] vecNegatives;

    return 0;
}
