#include "rectangle.h"
#include <iostream>
#include <string>

using namespace std;

int Rectangle::getLongueur()
{
    return dim1;
}

int Rectangle::getLargeur()
{
    return dim2;
}

int Rectangle::getPerimetre()
{
    return (2 * dim1 + 2 * dim2);
}

int Rectangle::getAire()
{
    return (dim1 * dim2);
}

string Rectangle::afficheInfo()
{
    return "Longueur : " + to_string(dim1) + "\n" +
           "Largeur : " + to_string(dim2);
}