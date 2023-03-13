#pragma once

class Paivays {
public:
    void setPaiva(int paiva);
    void setKuukausi(int kuukausi);
    void setVuosi(int vuosi);

    int getPaiva() const;
    int getKuukausi() const;
    int getVuosi() const;

    void tulostaPaivays() const;

private:
    int paiva_;
    int kuukausi_;
    int vuosi_;
};
