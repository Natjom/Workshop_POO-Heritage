#include <iostream>
#include "cube.h"
#include "rectangle.h"
#include "objet2D.h"

using namespace std;

void call()
{
    Objet2D *obj = nullptr; // Pointeur vers Objet2D

    int choix;
    cout << "Choisissez un type d'objet a creer:\n";
    cout << "1. Rectangle\n";
    cout << "2. Cube\n";
    cout << "Entrez le choix (1 ou 2): ";
    cin >> choix;

    if (choix == 1)
    {
        int longueur, largeur;
        cout << "Entrez la longueur du rectangle: ";
        cin >> longueur;
        cout << "Entrez la largeur du rectangle: ";
        cin >> largeur;

        // Creation du rectangle et affectation au pointeur
        obj = new Rectangle(longueur, largeur);
        cout << "Objet Rectangle cree avec succes!\n";
    }
    else if (choix == 2)
    {
        int cote;
        cout << "Entrez le cote du cube: ";
        cin >> cote;

        // Creation du cube et affectation au pointeur
        obj = new Cube(cote);
        cout << "Objet Cube cree avec succes!\n";
    }
    else
    {
        cout << "Choix invalide.\n";
    }

    // Affichage des informations de l'objet cree
    cout << "\nInformations sur l'objet cree:\n";
    cout << "Perimetre: " << obj->getPerimetre() << endl;
    cout << "Aire: " << obj->getAire() << endl;
    cout << obj->afficheInfo() << endl;

    // Liberation de la memoire allouee
    delete obj;
}

int main()
{
    // call();
    return 0;
}