#include <iostream>
#include "Automobilis.h"
#include "SpausdinimoPagalbininkas.h"
#include "VykdymoPagalbininkas.h"
#include <regex>
bool arTeisingasPasirinkimas(string basicString);

int fromStringToInt(string basicString);

using namespace std;
int main() {
    Automobilis *automobilis = new Automobilis();
    SpausdinimoPagalbininkas spausdinimoPagalbininkas;
    VykdymoPagalbininkas vykdymoPagalbininkas(*automobilis);

    string pasirinkimas;
    vykdymoPagalbininkas.iPagrindiniMeniu();

}