//
// Created by sebas on 28/08/2025.
//

#ifndef OrdenarVector_H
#define OrdenarVector_H

class OrdenarVector
{
    int _vecInt[10] = {};

public:
    explicit OrdenarVector(int v[10])
    {
        for (int i = 0; i < 10; i++)
        {
            _vecInt[i] = v[i];
        }
    }

    void orderAsc();
    void orderDesc();
    void show();
};

#endif //OrdenarVector_H