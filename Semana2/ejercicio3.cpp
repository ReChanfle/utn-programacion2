//
// Created by sebas on 27/08/2025.
//

#include <iostream>
#include "../Semana2/ejercicio3.h"

using namespace std;

//Crear una clase llamada CuentaBancaria que represente una cuenta bancaria.
//La clase debe tener los siguientes atributos:
//Número de cuenta (entero)
//Saldo actual (float)
// los siguientes métodos:
//Un constructor que me permita establecer el número de cuenta y el saldo.
//Un método depositar(float monto) que incremente el saldo.
//Un método retirar(float monto) que disminuya el saldo si hay fondos suficientes,
//caso contrario no hace nada.
//Un método obtenerSaldo() que devuelva el saldo actual.

void BankAccount::deposit(const float amount)
{
    this->balance += amount;
}

void BankAccount::withdraw(const float amount)
{
    if (this->balance > amount)
        this->balance = this->balance - amount;
}

float BankAccount::getAccountBalance() const
{
    return this->balance;
}

int main()
{

    int accountNumber;
    float initialBalance, balance;

    cout << "Por favor ingrese el numero de cuenta: " << endl;
    cin >> accountNumber;
    cout << "Por favor ingrese el deposito inicial: " << endl;
    cin >> initialBalance;

    BankAccount bankAccount{accountNumber, initialBalance};

    cout << "Cuanto quiere depositar: " << endl;
    cin >> balance;
    bankAccount.deposit(balance);
    cout << "Su balance es: " << bankAccount.getAccountBalance() << endl;
    cout << "Cuanto quiere retirar: " << endl;
    cin >> balance;
    bankAccount.withdraw(balance);
    cout << "Su balance es: " << bankAccount.getAccountBalance() << endl;

    return 0;

}


