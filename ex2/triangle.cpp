#include "triangle.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int Triangle::getHypotenuse() const { return max({dim1, dim2, dim3}); }
int Triangle::getFaceUne() const { return dim1; }
int Triangle::getFaceDeux() const { return dim2; }
int Triangle::getPerimetre() { return dim1 + dim2 + dim3; }

float Triangle::getAire()
{
    float s = getPerimetre() / 2.0f;
    if (dim1 + dim2 <= dim3 || dim1 + dim3 <= dim2 || dim2 + dim3 <= dim1)
    {
        cerr << "Triangle invalide : impossible de calculer l'aire." << endl;
        return 0.0f;
    }
    return sqrt(s * (s - dim1) * (s - dim2) * (s - dim3)); // formule de Héron
}

string Triangle::afficheInfo() const
{
    return
    "Cote 1 : " + to_string(dim1) + "\n" +
    "Cote 2 : " + to_string(dim2) + "\n" +
    "Cote 3 : " + to_string(dim3) + "\n";
}
