#ifndef JOC_H
#define JOC_H

#include "Avion.h"
#include "Meteo.h"
using namespace std;

class Joc {
private:
    Avion avion;
    Meteo meteo;

public:
    Joc(const string& modelAvion);

    void schimbaMeteo(const string& conditie, int vitezaVantului);
    void porneste();
};

#endif
