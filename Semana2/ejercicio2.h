//
// Created by sebas on 27/08/2025.
//
#include <ctime>

#ifndef DADO_H
#define DADO_H

class Dado
{
    int value = 0;

public:
    explicit Dado()
    {
        std::srand(std::time(0));
        int randomV = std::rand() % 6 + 1;
        this->value = randomV;
    };
    void throwDice();
    int getValue();
    bool isMaximum() const;
    bool isMinimum() const;
};

#endif //UTN_PROGRAMACION2_EJERCICIO2_H
