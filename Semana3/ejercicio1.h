//
// Created by sebas on 01/09/2025.
//

#ifndef Rectangle_H
#define Rectangle_H

class Rectangle
{
    float _width, _height;

    public:
    Rectangle(float w, float h)
    {
        _width = w;
        _height = h;
    };
    float GetWidth()
    {
        return _width;
    }
    float GetHeight()
    {
        return _height;
    }
    float Area()
    {
        return _width*_height;
    }
    float Perimeter()
    {
        return  2 * (_width+_height);
    }




};

#endif //UTN_PROGRAMACION2_EJERCICIO1_H