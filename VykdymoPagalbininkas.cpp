//
// Created by s038477 on 2020.10.28.
//

#include <iostream>
#include <string>
#include "VykdymoPagalbininkas.h"
#include "Automobilis.h"

void VykdymoPagalbininkas::vykdytiPasirinkima(int pasirinkimas) {
    switch (pasirinkimas) {
        case 1: vykdytiPirma(); break;
        case 2: vykdytiAntra(); break;
        case 3: vykdytiTrecia(); break;
        case 4: vykdytiKetvirta(); break;
        case 5: vykdytiPenkta(); break;
        case 0: exit(EXIT_SUCCESS);
        default: spausdinimoPagalbininkas.spaustintiNeteisingasPasirinkimas();break;
    }
}

VykdymoPagalbininkas::VykdymoPagalbininkas(Automobilis &automobilis) : automobilis(automobilis) {

}

void VykdymoPagalbininkas::vykdytiPirma() {
    spausdinimoPagalbininkas.spausdintiPradedamasVykdytiPasirinkimas();

    spausdinimoPagalbininkas.spausdintiRatoInfo(1, automobilis.getRatasPirmas().getLikutis(), automobilis.getRatasPirmas().isArTinkamasNaudoti());
    spausdinimoPagalbininkas.spausdintiRatoInfo(2, automobilis.getRatasAntras().getLikutis(), automobilis.getRatasAntras().isArTinkamasNaudoti());
    spausdinimoPagalbininkas.spausdintiRatoInfo(3, automobilis.getRatasTrecias().getLikutis(), automobilis.getRatasTrecias().isArTinkamasNaudoti());
    spausdinimoPagalbininkas.spausdintiRatoInfo(4, automobilis.getRatasKetvirtas().getLikutis(), automobilis.getRatasKetvirtas().isArTinkamasNaudoti());
    spausdinimoPagalbininkas.spausdintiVariklioInfo(automobilis.getVariklis());
    spausdinimoPagalbininkas.spausdintiVairoInfo(automobilis.getVairas());
    spausdinimoPagalbininkas.spausdintiKuroBakoInfo(automobilis.getKuroBakas());
}
//
void VykdymoPagalbininkas::vykdytiAntra() {
    if(!automobilis.getVariklis().isArUzvestas()){
        if(automobilis.getVariklis().isArPakankamasTepaloLygis()&&automobilis.getVariklis().getRida()<10000){
            automobilis.variklis.arUzvestas=true;
//            cout << automobilis.getVariklis().isArUzvestas() << endl;
            spausdinimoPagalbininkas.spausdintiAutomobilisSekmingaiUzvestas();
        } else{
            spausdinimoPagalbininkas.spausdintiVariklisNeuzsiveda();
        }
    }else {
        spausdinimoPagalbininkas.spausdintiAutomobilisNegaliButiUzvestasDuKartus();
    }
}

void VykdymoPagalbininkas::vykdytiTrecia() {
    if(automobilis.getVariklis().isArUzvestas()){
        automobilis.variklis.arUzvestas=false;
        spausdinimoPagalbininkas.spausdintiAutomobilisSekmingaiUzgesintas();
    }else {
        spausdinimoPagalbininkas.spausdintiAutomobilisNegaliButiUzgesintasDuKartus();
    }
}

void VykdymoPagalbininkas::vykdytiKetvirta() {
    if(arGaliVaziuoti()){
        vaziavimoItakaAutomobiliui();
        spausdinimoPagalbininkas.spausdintiVaziavimasSekmingas();
    }else{
        spausdinimoPagalbininkas.spausdintiPavaziuotiNepavyko();
    }
}

bool VykdymoPagalbininkas::arGaliVaziuoti() {
    if(automobilis.kuroBakas.likutisLitrais<=10){
        spausdinimoPagalbininkas.spausdintiPerMazaiKuro();
        return false;
    } else if(!automobilis.ratasPirmas.arTinkamasNaudoti || !automobilis.ratasAntras.arTinkamasNaudoti || !automobilis.ratasTrecias.arTinkamasNaudoti || !automobilis.ratasKetvirtas.arTinkamasNaudoti) {
        spausdinimoPagalbininkas.spausdintiPazeistasRatas();
        return false;
    } else if(automobilis.ratasPirmas.likutis<30 || automobilis.ratasAntras.likutis<30 || automobilis.ratasTrecias.likutis<30 || automobilis.ratasKetvirtas.likutis<30){
        spausdinimoPagalbininkas.spausdintiPadangoseTrukstaOro();
        return false;
    } else if(!automobilis.vairas.arVeikiantis) {
        spausdinimoPagalbininkas.spausdintiNeveikiaVairas();
        return false;
    } else if(!automobilis.variklis.arPakankamasTepaloLygis){
        spausdinimoPagalbininkas.spausdintiNepakankaTepalo();
        return false;
    } else if(!automobilis.variklis.arUzvestas) {
        spausdinimoPagalbininkas.spausdintiAutomobilisNeuzvestas();
        return false;
    }
    spausdinimoPagalbininkas.spausdintiDiagnostikaSekmingaGalimaVaziuoti();
    return true;
}

void VykdymoPagalbininkas::vaziavimoItakaAutomobiliui() {
    automobilis.kuroBakas.likutisLitrais-=10;
    if(automobilis.kuroBakas.likutisLitrais<2){
        automobilis.variklis.arUzvestas=false;
        spausdinimoPagalbininkas.spausdintiPerMazaiKuro();
        spausdinimoPagalbininkas.spausdintiAutomobilisUzgeso();
    }
    automobilis.variklis.rida+=1500;
    if(automobilis.variklis.rida>=10000){
        automobilis.variklis.arUzvestas=false;
        automobilis.variklis.arPakankamasTepaloLygis=false;
        spausdinimoPagalbininkas.spausdintiSugedoVariklisDelTepalo();
        spausdinimoPagalbininkas.spausdintiAutomobilisUzgeso();
    }

    automobilis.ratasPirmas.likutis-=5;
    if(automobilis.ratasPirmas.likutis<=30){
        automobilis.ratasPirmas.arTinkamasNaudoti=false;
        spausdinimoPagalbininkas.spausdintiSuluzoRatas();
    }
    automobilis.ratasAntras.likutis-=2;
    if(automobilis.ratasAntras.likutis<=30){
        automobilis.ratasAntras.arTinkamasNaudoti=false;
        spausdinimoPagalbininkas.spausdintiSuluzoRatas();
    }
    automobilis.ratasTrecias.likutis-=2;
    if(automobilis.ratasTrecias.likutis<=30){
        automobilis.ratasTrecias.arTinkamasNaudoti=false;
        spausdinimoPagalbininkas.spausdintiSuluzoRatas();
    }
    automobilis.ratasKetvirtas.likutis-=20;
    if(automobilis.ratasKetvirtas.likutis<=30){
        automobilis.ratasKetvirtas.arTinkamasNaudoti=false;
        spausdinimoPagalbininkas.spausdintiSuluzoRatas();
    }

}

void VykdymoPagalbininkas::vykdytiPenkta() {
    string pasirinkimass;
    while(true){
        spausdinimoPagalbininkas.spausdintiTechninesPagalbosMeniu();
        cin >> pasirinkimass;
        if(arTeisingasPasirinkimasAntras(pasirinkimass)){
            int intPasirinkimas = fromStringToIntAntras(pasirinkimass);
            vykdytiVykdytiTechniniPasirinkima(intPasirinkimas);
        }else{
            spausdinimoPagalbininkas.spaustintiNeteisingasPasirinkimas();
        }

    }

}

void VykdymoPagalbininkas::vykdytiVykdytiTechniniPasirinkima(int pasirinkimas) {
    switch (pasirinkimas) {
        case 1: keistiPirmaRata(); break;
        case 2: keistiAntraRata(); break;
        case 3: keistiTreciaRata(); break;
        case 4: keistiKetvirtaRata(); break;
        case 5: keistiVariklioTepalus(); break;
        case 6: papildytiDegalu(); break;
        case 7: taisytiVaira(); break;
        case 8: keistiVarikli(); break;
        case 0: iPagrindiniMeniu(); break;
        default: spausdinimoPagalbininkas.spaustintiNeteisingasPasirinkimas();break;
    }
}

void VykdymoPagalbininkas::keistiPirmaRata() {
automobilis.ratasPirmas.likutis = 100;
automobilis.ratasPirmas.arTinkamasNaudoti=true;
spausdinimoPagalbininkas.spausdintiRatasPakeistas();
}

void VykdymoPagalbininkas::keistiAntraRata() {
    automobilis.ratasAntras.likutis = 100;
    automobilis.ratasAntras.arTinkamasNaudoti=true;
    spausdinimoPagalbininkas.spausdintiRatasPakeistas();
}

void VykdymoPagalbininkas::keistiTreciaRata() {
    automobilis.ratasTrecias.likutis = 100;
    automobilis.ratasTrecias.arTinkamasNaudoti=true;
    spausdinimoPagalbininkas.spausdintiRatasPakeistas();
}

void VykdymoPagalbininkas::keistiVariklioTepalus() {
    automobilis.variklis.arPakankamasTepaloLygis = true;
    spausdinimoPagalbininkas.spausdintiTepalaiPakeisti();

}

void VykdymoPagalbininkas::keistiKetvirtaRata() {
    automobilis.ratasKetvirtas.likutis = 100;
    automobilis.ratasKetvirtas.arTinkamasNaudoti=true;
    spausdinimoPagalbininkas.spausdintiRatasPakeistas();
}

void VykdymoPagalbininkas::taisytiVaira() {
    automobilis.vairas.arVeikiantis=true;
    spausdinimoPagalbininkas.spausdintiPakeistasVairas();
}

void VykdymoPagalbininkas::papildytiDegalu() {
    automobilis.kuroBakas.likutisLitrais=80;
    spausdinimoPagalbininkas.spausdintiDegalaiPapildyti();
}

void VykdymoPagalbininkas::keistiVarikli() {
    automobilis.variklis.rida=0;
    spausdinimoPagalbininkas.spausdintiPakeistasVariklis();
    keistiVariklioTepalus();
}

int VykdymoPagalbininkas::fromStringToIntAntras(string basicString) {
    return stoi(basicString);
}

bool VykdymoPagalbininkas::arTeisingasPasirinkimasAntras(string basicString) {
    return basicString.find_first_not_of( "0123456789" ) == string::npos;
}

void VykdymoPagalbininkas::iPagrindiniMeniu() {
    string pasirinkimas;
    while(true){
        spausdinimoPagalbininkas.spausdintiPagrindiniMeniu();
        cin >> pasirinkimas;
        if(arTeisingasPasirinkimasAntras(pasirinkimas)){
            int intPasirinkimas = fromStringToIntAntras(pasirinkimas);
            vykdytiPasirinkima(intPasirinkimas);
        }else{
            spausdinimoPagalbininkas.spaustintiNeteisingasPasirinkimas();
        }

    }
}

