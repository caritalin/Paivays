#include <iostream>
#include "Paivays2.h"

using namespace std;

int main() {
    Paivays tanaan;
    Paivays huomenna;

    tanaan.kysyPaivays();
    tanaan.tulostaPaivays();

    huomenna = tanaan;
    huomenna.lisaaPaiva();
    huomenna.tulostaPaivays();

    return 0;
}
