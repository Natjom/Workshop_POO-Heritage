#ifndef OBJET2D_H
#define OBJET2D_H

#include <string>

using namespace std;

class Objet2D
{
protected:
    int dim1;
    int dim2;

public:
    Objet2D() : dim1(0), dim2(0) {}
    Objet2D(int dim1, int dim2) : dim1(dim1), dim2(dim2) {}

    virtual ~Objet2D() {}

    virtual int getPerimetre();
    virtual int getAire();
    virtual string afficheInfo();
};

#endif // OBJET2D_H
