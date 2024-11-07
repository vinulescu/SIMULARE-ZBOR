#ifndef AVION_H
#define AVION_H

#include <string>
using namespace std;

class Avion {
private:
    string model;
    int viteza;
    int altitudine;

public:
    Avion(const string& model);

    void urca(int valoare);
    void coboara(int valoare);
    void ajusteazaViteza(int nouaViteza);

    int getAltitudine() const;
    int getViteza() const;
    string getModel() const;
};

#endif
