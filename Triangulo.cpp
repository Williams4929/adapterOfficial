#pragma once
//#include "Cilindro.cpp"
class Triangulo 
{
private:
    double lado;

public:
    Triangulo(double lado) : lado(lado) {}

    double obtenerLado() {
        return lado;
    }
};