//
// Created by s038477 on 2020.10.28.
//

#include <iostream>
#include "SpausdinimoPagalbininkas.h"
using namespace std;
void SpausdinimoPagalbininkas::spausdintiPagrindiniMeniu() {
    cout << "---Spausdinamas pagrindinis meniu---" << endl;
    cout << "1 - Atlikti automobilio diagnostika." << endl;
    cout << "2 - Uzvesti automobilio varikli." << endl;
    cout << "3 - Uzgesinti automobilio varikli." << endl;
    cout << "4 - Vaziuoti automobiliu." << endl;
    cout << "5 - TECHNINE PAGALBA." << endl;
    cout << "0 - SUSINAIKINTI." << endl;
    cout << "------------------------------------" << endl;
    cout << "Iveskite pasirinkima..." << endl;
}

void SpausdinimoPagalbininkas::spaustintiNeteisingasPasirinkimas() {
    cout << "Neteisingas pasirinkimas." << endl;
}

void SpausdinimoPagalbininkas::spausdintiPradedamasVykdytiPasirinkimas() {
    cout << "Pradedamas vykdyti pasirinkimas." << endl;
}

void SpausdinimoPagalbininkas::spausdintiRatoInfo(int i, int i1, bool b) {
    cout << "-Rato numeris: " << i << ". Likutis: " << i1 << " . Ar tinkamas naudoti? " << b << endl;
}

void SpausdinimoPagalbininkas::spausdintiVariklioInfo(Variklis variklis) {
    cout << "-Variklio info: " << "Ar uzvestas? " << variklis.isArUzvestas() << " . Rida: " << variklis.getRida() << " . Ar pakankamas tepalo lygis: " << variklis.isArPakankamasTepaloLygis() << endl;
}

void SpausdinimoPagalbininkas::spausdintiVairoInfo(const Vairas &vairas) {
cout << "-Vairo info: ar veikiantis? " << vairas.isArVeikiantis() << endl;
}

void SpausdinimoPagalbininkas::spausdintiKuroBakoInfo(const KuroBakas &bakas) {
    cout << "-Kuro bako info: Kiek litru bake? " << bakas.getLikutisLitrais() << endl;
}

void SpausdinimoPagalbininkas::spausdintiAutomobilisNegaliButiUzvestasDuKartus() {
    cout << "Negalite uzvesti automobilio antra karta." << endl;
}

void SpausdinimoPagalbininkas::spausdintiAutomobilisSekmingaiUzvestas() {
    cout << "Automobilis sekmingai uzvestas." << endl;
}

void SpausdinimoPagalbininkas::spausdintiAutomobilisSekmingaiUzgesintas() {
    cout << "Automobilis sekmingai uzgesintas." << endl;
}

void SpausdinimoPagalbininkas::spausdintiAutomobilisNegaliButiUzgesintasDuKartus() {
    cout << "Negalite uzgesinti automobilio antra karta." << endl;
}

void SpausdinimoPagalbininkas::spausdintiPavaziuotiNepavyko() {
    cout << "Pavaziuoti nepavyko." << endl;
}

void SpausdinimoPagalbininkas::spausdintiPerMazaiKuro() {
    cout << "Neuztenka DEGALU." << endl;
}

void SpausdinimoPagalbininkas::spausdintiAutomobilisNeuzvestas() {
    cout << "Automobilis neuzvestas. Pradziai uzveskite." << endl;
}

void SpausdinimoPagalbininkas::spausdintiNepakankaTepalo() {
    cout << "Variklyje truksta tepalo, vaziuokite i servisa." << endl;
}

void SpausdinimoPagalbininkas::spausdintiNeveikiaVairas() {
    cout << "Neveikia vairas, vaziuokite i servisa.." << endl;
}

void SpausdinimoPagalbininkas::spausdintiPadangoseTrukstaOro() {
    cout << "Padangose truksta oro, papildykite." << endl;
}

void SpausdinimoPagalbininkas::spausdintiPazeistasRatas() {
    cout << "Sulauzytas ratas." << endl;
}

void SpausdinimoPagalbininkas::spausdintiDiagnostikaSekmingaGalimaVaziuoti() {
    cout << "automobilis tvarkingas, galima vaziuoti." << endl;
}

void SpausdinimoPagalbininkas::spausdintiVaziavimasSekmingas() {
    cout << "Vaziavimas baigtas." << endl;
}

void SpausdinimoPagalbininkas::spausdintiAutomobilisUzgeso() {
    cout << "Automobilis uzgeso "<< endl;
}

void SpausdinimoPagalbininkas::spausdintiSugedoVariklisDelTepalo() {
    cout << "pritruko tepalo, tad sugedo variklis." << endl;
}

void SpausdinimoPagalbininkas::spausdintiSuluzoRatas() {
    cout << "suluzo automobilio ratas, atlikite diagnostika ir i servisa." << endl;

}

void SpausdinimoPagalbininkas::spausdintiTechninesPagalbosMeniu() {
    cout << "---Spausdinamas pagrindinis meniu---" << endl;
    cout << "1 - Keisti/pripusti pirma rata." << endl;
    cout << "2 - Keisti/pripusti antra rata." << endl;
    cout << "3 - Keisti/pripusti trecia rata." << endl;
    cout << "4 - Keisti/pripusti ketvirta rata." << endl;
    cout << "5 - Keisti variklio tepalus." << endl;
    cout << "6 - Papildyti degalu." << endl;
    cout << "7 - Taisyti vaira." << endl;
    cout << "8 - Keisti varikli." << endl;
    cout << "0 - PALIKTI TECHNINE PAGALBA." << endl;
    cout << "------------------------------------" << endl;
    cout << "Iveskite pasirinkima..." << endl;
}

void SpausdinimoPagalbininkas::spausdintiRatasPakeistas() {
    cout << "RATAS PAKEISTAS" << endl;
}

void SpausdinimoPagalbininkas::spausdintiTepalaiPakeisti() {
    cout << "TEPALAI PAKEISTI" << endl;
}

void SpausdinimoPagalbininkas::spausdintiPakeistasVairas() {
    cout << "PAKEISTAS VAIRAS" << endl;

}

void SpausdinimoPagalbininkas::spausdintiPakeistasVariklis() {
    cout << "PAKEISTAS VARIKLIS" << endl;
}

void SpausdinimoPagalbininkas::spausdintiDegalaiPapildyti() {
    cout << "DEGALAI PAPILDYTI" << endl;
}

void SpausdinimoPagalbininkas::spausdintiVariklisNeuzsiveda() {
    cout << "Variklis neuzsiveda. Atlikite diagnostika." << endl;
}
