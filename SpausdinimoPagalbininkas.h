//
// Created by s038477 on 2020.10.28.
//

#ifndef PROJEKTINIS_SPAUSDINIMOPAGALBININKAS_H
#define PROJEKTINIS_SPAUSDINIMOPAGALBININKAS_H


#include "Variklis.h"
#include "Vairas.h"
#include "KuroBakas.h"

class SpausdinimoPagalbininkas {
private:

public:
void spausdintiPagrindiniMeniu();

    void spaustintiNeteisingasPasirinkimas();

    void spausdintiPradedamasVykdytiPasirinkimas();

    void spausdintiRatoInfo(int i, int i1, bool b);

    void spausdintiVariklioInfo(Variklis variklis);

    void spausdintiVairoInfo(const Vairas &vairas);

    void spausdintiKuroBakoInfo(const KuroBakas &bakas);

    void spausdintiAutomobilisNegaliButiUzvestasDuKartus();

    void spausdintiAutomobilisSekmingaiUzvestas();

    void spausdintiAutomobilisSekmingaiUzgesintas();

    void spausdintiAutomobilisNegaliButiUzgesintasDuKartus();

    void spausdintiPavaziuotiNepavyko();

    void spausdintiPerMazaiKuro();

    void spausdintiAutomobilisNeuzvestas();

    void spausdintiNepakankaTepalo();

    void spausdintiNeveikiaVairas();

    void spausdintiPadangoseTrukstaOro();

    void spausdintiPazeistasRatas();

    void spausdintiDiagnostikaSekmingaGalimaVaziuoti();

    void spausdintiVaziavimasSekmingas();

    void spausdintiAutomobilisUzgeso();

    void spausdintiSugedoVariklisDelTepalo();

    void spausdintiSuluzoRatas();

    void spausdintiTechninesPagalbosMeniu();

    void spausdintiRatasPakeistas();

    void spausdintiTepalaiPakeisti();

    void spausdintiPakeistasVairas();

    void spausdintiPakeistasVariklis();

    void spausdintiDegalaiPapildyti();

    void spausdintiVariklisNeuzsiveda();
};


#endif //PROJEKTINIS_SPAUSDINIMOPAGALBININKAS_H
