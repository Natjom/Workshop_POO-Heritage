#include "main.cpp"

void test()
{
    Stockage stockage;


    Rectangle *rect1 = new Rectangle(10, 5); 
    Cube *cube1 = new Cube(4);              
    Rectangle *rect2 = new Rectangle(7, 3);  
    Cube *cube2 = new Cube(6);             

    stockage.ajouter(rect1);
    stockage.ajouter(cube1);
    stockage.ajouter(rect2);
    stockage.ajouter(cube2); 

    Rectangle *rect3 = new Rectangle(12, 8);
    stockage.ajouter(1, rect3);

    std::cout << "Informations des objets stockes : " << std::endl;
    stockage.afficherInfos();
}