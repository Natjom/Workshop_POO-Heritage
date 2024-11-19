#ifndef STOCKAGE_H
#define STOCKAGE_H

#include <vector>
#include "objet2d.h"

class Stockage {
private:
    std::vector<Objet2D*> objets;

public:
    Stockage() {}
    ~Stockage();

    void ajouter(Objet2D* obj);
    void ajouter(int index, Objet2D* obj);
    void afficherInfos() const;
};

#endif // STOCKAGE_H
