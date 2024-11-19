#include <iostream>
#include "cube.h"
#include "rectangle.h"
#include "objet2D.h"
#include "triangle.h"
#include "stockage.h"

using namespace std;

int main()
{
    Stockage stockage;


    Rectangle *rect1 = new Rectangle(10, 5); 
    Cube *cube1 = new Cube(4);              
    Rectangle *rect2 = new Rectangle(7, 3);  
    Cube *cube2 = new Cube(6);
    Triangle *tri1 = new Triangle(12, 8, 6, 90, 45, 45);       

    stockage.ajouter(rect1);
    stockage.ajouter(cube1);
    stockage.ajouter(rect2);
    stockage.ajouter(cube2); 
    stockage.ajouter(tri1);

    Rectangle *rect3 = new Rectangle(12, 8);
    stockage.ajouter(1, rect3);

    std::cout << "Informations des objets stockes : " << std::endl;
    stockage.afficherInfos();

    return 0;
}