#include "kids.h"

kids::kids(string n, string c, int aN, int mN, int gN, string cf, string em, int aA, int mA, int gA, unsigned int me, bool cosc, string coup, double tot, string tK, string dK, double cK, unsigned int scK, unsigned int stK, bool hideK): nowqt(n, c, aN, mN, gN, cf, em, aA, mA, gA, me, cosc, coup, tot), titoloK(tK), descrizioneK(dK), costoK(cK), schermicontK(scK), schermitotK(stK), hdK(hideK) {}

kids *kids::clone() const
{
    return new kids(*this);
}

string kids::getTipoPacc() const
{
    return "kids";
}

double kids::getTot() const
{
    return costoK;
}

string kids::getTitoloK() const
{
    return titoloK;
}

string kids::getDescK() const
{
    return descrizioneK;
}

double kids::getCostoK() const
{
    return costoK;
}

unsigned int kids::getSchermiContK() const
{
    return schermicontK;
}

unsigned int kids::getSchermiTotK() const
{
    return schermitotK;
}

bool kids::isHdK() const
{
    return hdK;
}

void kids::aumentaSchermiK()
{
    if(schermicontK<schermitotK) {
        schermicontK++;
        costoK=costoK+2;
    }
}

void kids::aumentaCostoKHD()
{
    if(hdK) {
        costoK=costoK+1;
    }
}
