//
// Created by sebas on 27/08/2025.
//

#ifndef EJERCICIO1_H
#define EJERCICIO1_H
class Ejercicio1
{
    float width, height;

public:
    void setRectangle(float width, float height);
    [[nodiscard]] float getWidth() const;
    [[nodiscard]] float getHeight() const;
    static float calculateArea(float width, float height);
    static float calculatePerimeter(float width, float height);
};
#endif //UTN_PROGRAMACION2_EJERCICIO1_H