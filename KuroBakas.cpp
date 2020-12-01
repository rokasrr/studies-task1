//
// Created by s038477 on 2020.10.28.
//

#include "KuroBakas.h"

KuroBakas::KuroBakas() {
this->likutisLitrais=80;
}

int KuroBakas::getLikutisLitrais() const {
    return likutisLitrais;
}

void KuroBakas::setLikutisLitrais(int likutisLitrais) {
    KuroBakas::likutisLitrais = likutisLitrais;
}
