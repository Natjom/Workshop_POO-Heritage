#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "objet2d.h"
#include <string>

using namespace std;

class Triangle : public Objet2D
{
public:
    Triangle() {}
    Triangle(int dim1, int dim2, int dim3, float ang1, float ang2, float ang3) : Objet2D(dim1, dim2, dim3, ang1, ang2, ang3) {}

    int getHypotenuse() const; // Plus grand côté (dans un triangle rectangle)
    int getFaceUne() const;    // Premier côté
    int getFaceDeux() const;   // Deuxième côté

    virtual int getPerimetre() override; 
    virtual float getAire() override; 
    virtual string afficheInfo() const override;
};

#endif // TRIANGLE_H
