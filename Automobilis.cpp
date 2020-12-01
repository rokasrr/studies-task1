//
// Created by s038477 on 2020.10.28.
//

#include "Automobilis.h"

const Ratas &Automobilis::getRatasPirmas() const {
    return ratasPirmas;
}

void Automobilis::setRatasPirmas(const Ratas &ratasPirmas) {
    Automobilis::ratasPirmas = ratasPirmas;
}

const Ratas &Automobilis::getRatasAntras() const {
    return ratasAntras;
}

void Automobilis::setRatasAntras(const Ratas &ratasAntras) {
    Automobilis::ratasAntras = ratasAntras;
}

const Ratas &Automobilis::getRatasTrecias() const {
    return ratasTrecias;
}

void Automobilis::setRatasTrecias(const Ratas &ratasTrecias) {
    Automobilis::ratasTrecias = ratasTrecias;
}

const Ratas &Automobilis::getRatasKetvirtas() const {
    return ratasKetvirtas;
}

void Automobilis::setRatasKetvirtas(const Ratas &ratasKetvirtas) {
    Automobilis::ratasKetvirtas = ratasKetvirtas;
}

Variklis Automobilis::getVariklis() {
    return variklis;
}

void Automobilis::setVariklis(Variklis &variklis) {
    Automobilis::variklis = variklis;
}

const Vairas &Automobilis::getVairas() const {
    return vairas;
}

void Automobilis::setVairas(const Vairas &vairas) {
    Automobilis::vairas = vairas;
}

const KuroBakas &Automobilis::getKuroBakas() const {
    return kuroBakas;
}

void Automobilis::setKuroBakas(const KuroBakas &kuroBakas) {
    Automobilis::kuroBakas = kuroBakas;
}
