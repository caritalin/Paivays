#include "Henkilo.h"
#include<iostream>
using std::cout;
using std::endl;
void Henkilo::setNimi(string aNimi)
{
           nimi = aNimi;
}
void Henkilo::setIka(int aIka)
{
           ika = aIka;
}
string Henkilo::getNimi()
{
           return nimi;
}
int Henkilo::getIka()
{
           return ika;
}
void Henkilo::tulostaHenkilonTiedot() {
           cout << "Nimi: " << nimi << endl;
           cout << "Ika: " << ika << endl << endl;
}
 