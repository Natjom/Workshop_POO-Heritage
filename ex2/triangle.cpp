#include "triangle.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Retourne le plus grand côté comme hypotenuse
int Triangle::getHypotenuse() const
{
    return max({dim1, dim2, dim3});
}

// Retourne la première face
int Triangle::getFaceUne() const
{
    return dim1;
}

// Retourne la deuxième face
int Triangle::getFaceDeux() const
{
    return dim2;
}

// Retourne le périmètre du triangle
int Triangle::getPerimetre()
{
    return dim1 + dim2 + dim3;
}

// Calcul de l'aire du triangle avec la formule de Héron
float Triangle::getAire()
{
    // Semi-périmètre
    float s = getPerimetre() / 2.0f;

    // Vérifie si le triangle est valide
    if (dim1 + dim2 <= dim3 || dim1 + dim3 <= dim2 || dim2 + dim3 <= dim1)
    {
        cerr << "Triangle invalide : impossible de calculer l'aire." << endl;
        return 0.0f;
    }

    // Aire selon la formule de Héron
    return sqrt(s * (s - dim1) * (s - dim2) * (s - dim3));
}

// Affiche les informations sur le triangle
string Triangle::afficheInfo() const
{
    return "Triangle :\n" +
           "Côté 1 : " + to_string(dim1) + "\n" +
           "Côté 2 : " + to_string(dim2) + "\n" +
           "Côté 3 : " + to_string(dim3) + "\n" +
           "Périmètre : " + to_string(dim1 + dim2 + dim3) + "\n";
}
