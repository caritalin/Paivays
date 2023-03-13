#pragma once
#include<string>
using std::string;
class Henkilo {
public:
           void setNimi(string aNimi);
           void setIka(int aIka);
           string getNimi();
           int getIka();
           void tulostaHenkilonTiedot();
private:
           string nimi;
           int ika;
};