#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "objet2d.h"
#include <string>

using namespace std;

class Rectangle : public Objet2D
{
public:
    Rectangle() {}
    Rectangle(int tdim1, int tdim2) : Objet2D(tdim1, tdim2, 0, 90, 0, 0) {}
    ~Rectangle() {}

    int getLongueur();
    int getLargeur();

    virtual int getPerimetre() override;
    virtual float getAire() override;
    virtual string afficheInfo() const override;

};

#endif // RECTANGLE_H
