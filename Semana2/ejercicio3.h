//
// Created by sebas on 27/08/2025.
//

#ifndef BankAccount_H
#define BankAccount_H

class BankAccount
{
    int accountNumber;
    float balance;

    public:
    BankAccount(const int accountNumber, const float balance)
    {
        this->accountNumber = accountNumber;
        this->balance = balance;
    }
    void deposit(const float amount);
    void withdraw(const float amount);
    float getAccountBalance() const;

};

#endif BankAccount_H