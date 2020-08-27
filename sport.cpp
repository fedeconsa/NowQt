#include "sport.h"

sport::sport(string n, string c, int aN, int mN, int gN, string cf, string em, int aA, int mA, int gA, unsigned int me, bool cosc, string coup, double tot, string tS, string dS, double cS, unsigned int scS, unsigned int stS, bool shdS): nowqt(n, c, aN, mN, gN, cf, em, aA, mA, gA, me, cosc, coup, tot), titoloS(tS), descrizioneS(dS), costoS(cS), schermicontS(scS), schermitotS(stS), superhdS(shdS) {}

sport *sport::clone() const
{
    return new sport(*this);
}

string sport::getTipoPacc() const
{
    return "sport";
}

double sport::getTot() const
{
    return costoS;
}

string sport::getTitoloS() const
{
    return titoloS;
}

string sport::getDescS() const
{
    return descrizioneS;
}

double sport::getCostoS() const
{
    return costoS;
}

unsigned int sport::getSchermiContS() const
{
    return schermicontS;
}

unsigned int sport::getSchermiTotS() const
{
    return schermitotS;
}

bool sport::isSuperHdS() const
{
    return superhdS;
}

void sport::aumentaSchermiS()
{
    if(schermicontS<schermitotS) {
        schermicontS++;
        costoS=costoS+4;
    }
}

void sport::aumentaCostoSHD()
{
    if(superhdS) {
        costoS=costoS+5;
    }
}
