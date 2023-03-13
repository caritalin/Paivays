#include "Paivays.h"


int main() {
    Paivays tanaan;
    tanaan.setPaiva(13);
    tanaan.setKuukausi(3);
    tanaan.setVuosi(2023);

    Paivays huomenna;
    huomenna.setPaiva(14);
    huomenna.setKuukausi(3);
    huomenna.setVuosi(2023);

    tanaan.tulostaPaivays();
    huomenna.tulostaPaivays();

    return 0;
}
