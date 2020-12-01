//
// Created by s038477 on 2020.10.28.
//

#include "Ratas.h"

Ratas::Ratas() {
this->likutis=100;
this->arTinkamasNaudoti=true;
}

int Ratas::getLikutis() const {
    return likutis;
}

void Ratas::setLikutis(int likutis) {
    Ratas::likutis = likutis;
}

bool Ratas::isArTinkamasNaudoti() const {
    return arTinkamasNaudoti;
}

void Ratas::setArTinkamasNaudoti(bool arTinkamasNaudoti) {
    Ratas::arTinkamasNaudoti = arTinkamasNaudoti;
}
