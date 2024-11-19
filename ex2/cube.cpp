#include "cube.h"
#include <iostream>

int Cube::getCote()
{
    return dim1;
}

int Cube::getPerimetre()
{
    return (4 * dim1);
}

float Cube::getAire()
{
    return (dim1 * dim1);
}

string Cube::afficheInfo() const { 
    return "Cote : " + to_string(dim1) + "\n";
}
