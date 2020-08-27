#include "allinclusive.h"

allinclusive::allinclusive(string n, string c, int gN, int mN, int aN, string cf, string em, int gA, int mA, int aA, unsigned int me, bool cosc, string coup, double tot, string tK, string dK, double cK, unsigned int scK, unsigned int stK, bool hideK, string tC, string dC, double cC, unsigned int scC, unsigned int stC, bool hideC, string tS, string dS, double cS, unsigned int scS, unsigned int stS, bool shdS, double cAI): nowqt(n, c, gN, mN, aN, cf, em, gA, mA, aA, me, cosc, coup, tot), kids(n, c, gN, mN, aN, cf, em, gA, mA, aA, me, cosc, coup, tot, tK, dK, cK, scK, stK, hideK), cinema(n, c, gN, mN, aN, cf, em, gA, mA, aA, me, cosc, coup, tot, tC, dC, cC, scC, stC, hideC), sport(n, c, gN, mN, aN, cf, em, gA, mA, aA, me, cosc, coup, tot, tS, dS, cS, scS, stS, shdS), costoAI(cAI) {}

allinclusive *allinclusive::clone() const
{
    return new allinclusive(*this);
}

string allinclusive::getTipoPacc() const
{
    return "allinclusive";
}

double allinclusive::getCostoAI() const
{
 /*   int sconto=(getTot()*35)/100;
    costoAI=getTot()-sconto;
    return costoAI; */
}

double allinclusive::getTot() const
{
    return costoAI;
}

