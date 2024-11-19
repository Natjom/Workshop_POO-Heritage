#ifndef OBJET2D_H
#define OBJET2D_H

#include <string>

using namespace std;

class Objet2D
{
protected:
    int dim1;
    int dim2;
    int dim3;
    float ang1;
    float ang2;
    float ang3;

public:
    Objet2D() : dim1(0), dim2(0), dim3(0), ang1(0), ang2(0), ang3(0) {}
    Objet2D(int dim1, int dim2, int dim3, float ang1, float ang2, float ang3) : dim1(dim1), dim2(dim2), dim3(dim3), ang1(ang1), ang2(ang2), ang3(ang3) {}

    virtual ~Objet2D() {}

    virtual int getPerimetre();
    virtual float getAire();
    virtual string afficheInfo() const;
};

#endif // OBJET2D_H
