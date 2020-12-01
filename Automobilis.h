//
// Created by s038477 on 2020.10.28.
//

#ifndef PROJEKTINIS_AUTOMOBILIS_H
#define PROJEKTINIS_AUTOMOBILIS_H


#include "Ratas.h"
#include "Variklis.h"
#include "Vairas.h"
#include "KuroBakas.h"

class Automobilis {
private:

public:
    Ratas ratasPirmas;
    Ratas ratasAntras;
    Ratas ratasTrecias;
    Ratas ratasKetvirtas;

    Vairas vairas;
    KuroBakas kuroBakas;
    Variklis variklis;
    const Ratas &getRatasPirmas() const;

    void setRatasPirmas(const Ratas &ratasPirmas);

    const Ratas &getRatasAntras() const;

    void setRatasAntras(const Ratas &ratasAntras);

    const Ratas &getRatasTrecias() const;

    void setRatasTrecias(const Ratas &ratasTrecias);

    const Ratas &getRatasKetvirtas() const;

    void setRatasKetvirtas(const Ratas &ratasKetvirtas);

    Variklis getVariklis() ;

    void setVariklis(Variklis &variklis);

    const Vairas &getVairas() const;

    void setVairas(const Vairas &vairas);

    const KuroBakas &getKuroBakas() const;

    void setKuroBakas(const KuroBakas &kuroBakas);
};


#endif //PROJEKTINIS_AUTOMOBILIS_H
