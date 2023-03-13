#include <iostream>
#include "Paivays2.h"

using namespace std;

void Paivays::setPaiva(int p) {
    paiva = p;
}

void Paivays::setKuukausi(int k) {
    kuukausi = k;
}

void Paivays::setVuosi(int v) {
    vuosi = v;
}

int Paivays::getPaiva() const {
    return paiva;
}

int Paivays::getKuukausi() const {
    return kuukausi;
}

int Paivays::getVuosi() const {
    return vuosi;
}

void Paivays::tulostaPaivays() const {
    cout << paiva << "." << kuukausi << "." << vuosi << endl;
}

void Paivays::kysyPaivays() {
    cout << "Anna paivays muodossa pp kk vvvv: ";
    cin >> paiva >> kuukausi >> vuosi;
}

void Paivays::lisaaPaiva() {
    ++paiva;
    if (paiva > 31 && (kuukausi == 1 || kuukausi == 3 || kuukausi == 5 ||
        kuukausi == 7 || kuukausi == 8 || kuukausi == 10 || kuukausi == 12)) {
        paiva = 1;
        ++kuukausi;
        if (kuukausi > 12) {
            kuukausi = 1;
            ++vuosi;
        }
    }
    else if (paiva > 30 && (kuukausi == 4 || kuukausi == 6 || kuukausi == 9 || kuukausi == 11)) {
        paiva = 1;
        ++kuukausi;
    }
    else if (paiva > 28 && kuukausi == 2 && (vuosi % 4 != 0 || (vuosi % 100 == 0 && vuosi % 400 != 0))) {
        paiva = 1;
        ++kuukausi;
    }
    else if (paiva > 29 && kuukausi == 2) {
        paiva = 1;
        ++kuukausi;
    }
}

