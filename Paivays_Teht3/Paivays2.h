#ifndef PAIVAYS_H
#define PAIVAYS_H

#include <iostream>

using namespace std;

class Paivays {
public:
    void setPaiva(int p);
    void setKuukausi(int k);
    void setVuosi(int v);
    int getPaiva() const;
    int getKuukausi() const;
    int getVuosi() const;
    void tulostaPaivays() const;
    void kysyPaivays();
    void lisaaPaiva();

private:
    int paiva;
    int kuukausi;
    int vuosi;
};

#endif
