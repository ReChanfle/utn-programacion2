//
// Created by sebas on 27/08/2025.
//

#ifndef Triangle_H
#define Triangle_H

class Triangle
{
    float sides[3]{};

public:
    float getSide(int side) const;
    void setSide(int side, float value);
    int getType();
    bool isEscaleno();
    bool isIsosceles();
    bool isEquilatero();


};

#endif //UTN_PROGRAMACION2_EJERCICIO4_H