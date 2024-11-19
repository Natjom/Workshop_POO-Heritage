#ifndef CUBE_H
#define CUBE_H

#include "rectangle.h"
#include <string>

using namespace std;

class Cube : public Rectangle
{
public:
    Cube() : Rectangle(0, 0) {}
    Cube(int dim1) : Rectangle(dim1, dim1) {}

    int getCote();

    virtual int getPerimetre() override;
    virtual float getAire() override;
    virtual string afficheInfo() const override;

};

#endif // CUBE_H
