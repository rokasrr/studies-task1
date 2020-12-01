//
// Created by s038477 on 2020.10.28.
//

#ifndef PROJEKTINIS_VYKDYMOPAGALBININKAS_H
#define PROJEKTINIS_VYKDYMOPAGALBININKAS_H


#include <xstring>
#include "SpausdinimoPagalbininkas.h"
#include "Automobilis.h"

using namespace std;
class VykdymoPagalbininkas {
private:
    Automobilis& automobilis;
    SpausdinimoPagalbininkas spausdinimoPagalbininkas;
    void vykdytiPirma();
    int fromStringToIntAntras(string basicString);

    bool arTeisingasPasirinkimasAntras(string basicString);
public:
    VykdymoPagalbininkas(Automobilis &automobilis);
void vykdytiPasirinkima(int pasirinkimas);


    void vykdytiAntra();

    void vykdytiTrecia();

    void vykdytiKetvirta();

    bool arGaliVaziuoti();

    void vaziavimoItakaAutomobiliui();

    void vykdytiPenkta();

    void vykdytiVykdytiTechniniPasirinkima(int pasirinkimas);



    void keistiPirmaRata();

    void keistiAntraRata();

    void keistiTreciaRata();

    void keistiVariklioTepalus();

    void keistiKetvirtaRata();

    void taisytiVaira();

    void papildytiDegalu();

    void keistiVarikli();

    void iPagrindiniMeniu();
};


#endif //PROJEKTINIS_VYKDYMOPAGALBININKAS_H
