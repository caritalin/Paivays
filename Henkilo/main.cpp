
#include<iostream>
#include<vector>
#include "Henkilo.h"
using namespace std;
int main() {
        Henkilo pekka;
        pekka.setNimi("Pekka");
        pekka.setIka(20);
        Henkilo milla;
        milla.setNimi("Milla");
        milla.setIka(22);
        cout << "Henkiloiden tiedot! " << endl << endl;
        pekka.tulostaHenkilonTiedot();
        milla.tulostaHenkilonTiedot();
        return EXIT_SUCCESS;
}
