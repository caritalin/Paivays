#include <iostream>
#include "Paivays.h"

void Paivays::setPaiva(int paiva) {
    paiva_ = paiva;
}

void Paivays::setKuukausi(int kuukausi) {
    kuukausi_ = kuukausi;
}

void Paivays::setVuosi(int vuosi) {
    vuosi_ = vuosi;
}

int Paivays::getPaiva() const {
    return paiva_;
}

int Paivays::getKuukausi() const {
    return kuukausi_;
}

int Paivays::getVuosi() const {
    return vuosi_;
}

void Paivays::tulostaPaivays() const {
    std::cout << paiva_ << "." << kuukausi_ << "." << vuosi_ << std::endl;
}
