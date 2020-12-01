//
// Created by s038477 on 2020.10.28.
//

#include "Vairas.h"

Vairas::Vairas() {
this->arVeikiantis=true;
}
bool Vairas::isArVeikiantis() const {
    return arVeikiantis;
}

void Vairas::setArVeikiantis(bool arVeikiantis) {
    Vairas::arVeikiantis = arVeikiantis;
}

