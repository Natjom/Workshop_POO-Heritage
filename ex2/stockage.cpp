#include "stockage.h"
#include <iostream>

Stockage::~Stockage() {
    for (Objet2D* obj : objets) {
        delete obj;
    }
}

void Stockage::ajouter(Objet2D* obj) {
    objets.push_back(obj);
}

void Stockage::ajouter(int index, Objet2D* obj) {
    if (index >= 0 && index <= static_cast<int>(objets.size())) {
        objets.insert(objets.begin() + index, obj);
    } else {
        std::cerr << "Index invalide !" << std::endl;
    }
}

void Stockage::afficherInfos() const {
    for (const Objet2D* obj : objets) {
        if (obj != nullptr) {
            std::cout << obj->afficheInfo() << std::endl;
        }
    }
}
