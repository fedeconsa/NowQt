#ifndef NOWQT_H
#define NOWQT_H

#include<QDate>
#include <string>
using std::string;


class nowqt {

public:

    nowqt(string="", string="", int=2000, int=1, int=1, string="", string="", int=2000, int=1, int=1, unsigned int=1, bool=false, string="", double=0);
    virtual ~nowqt() = default;
    // metodi virtuali puri
    virtual nowqt* clone() const =0;
    virtual string getTipoPacc() const=0;
    virtual double getTot() const=0; // prezzo che paga il cliente al mese

    string getNome() const;
    string getCognome() const;
    QDate getDataN() const;
    int getGiornoN() const;
    int getMeseN() const;
    int getAnnoN() const;
    string getCodFisc() const;
    string getEMail() const;
    QDate getDataInAbb() const;
    int getGiornoInAbb() const;
    int getMeseInAbb() const;
    int getAnnoInAbb() const;
    unsigned int getMesi() const;
    bool isCodSconto() const;
    string getCoupon() const;

    void verificaCoupon();
    void aggiornaTot();
    double calcolaTotAbb(unsigned int, double); // stampa il prezzo che paga il cliente per tuttta la durata dell'abbonamento
    QDate calcolaFiAbb(QDate, unsigned int); // calcola la fine dell'abbonamento e stampa la data

    virtual bool operator==(const nowqt&) const;
    virtual bool operator<(const nowqt&) const;
    virtual bool operator>(const nowqt&) const;

private:
    string nome;
    string cognome;
    QDate dataNascita;
    string codicefiscale;
    string email;
    QDate dataInAbb;
    unsigned int mesi;
    bool codicesconto;
    string coupon;
    double totale;
};

std::ostream& operator<<(std::ostream&, const nowqt&);

#endif // NOWQT_H
