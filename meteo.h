#ifndef METEO_H
#define METEO_H

#include <string>
using namespace std;

class Meteo {
private:
    string conditie;
    int vitezaVantului;

public:
    Meteo();
    void setConditie(const string& nouaConditie);
    void setVitezaVantului(int viteza);

    string getConditie() const;
    int getVitezaVantului() const;
};

#endif
