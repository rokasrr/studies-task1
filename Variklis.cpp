//
// Created by s038477 on 2020.10.28.
//

#include "Variklis.h"

Variklis::Variklis() {
this->rida=0;
this->arPakankamasTepaloLygis=true;
this->arUzvestas=false;
}

bool Variklis::isArUzvestas() {
    return arUzvestas;
}

void Variklis::setArUzvestas(bool arUzvestas) {
    Variklis::arUzvestas = arUzvestas;
}

int Variklis::getRida() const {
    return rida;
}

void Variklis::setRida(int rida) {
    Variklis::rida = rida;
}

bool Variklis::isArPakankamasTepaloLygis() const {
    return arPakankamasTepaloLygis;
}

void Variklis::setArPakankamasTepaloLygis(bool arPakankamasTepaloLygis) {
    Variklis::arPakankamasTepaloLygis = arPakankamasTepaloLygis;
}
