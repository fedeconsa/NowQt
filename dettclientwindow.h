#ifndef DETTCLIENTWINDOW_H
#define DETTCLIENTWINDOW_H


#include <QDialog>
#include<QVBoxLayout>
#include<QGroupBox>
#include<QHBoxLayout>
#include<QLabel>
#include<QFormLayout>
#include<QPushButton>
#include<QFile>
#include <QString>
#include<QMessageBox>
#include"viewlistac.h"
#include"nowqt.h"
#include"kids.h"
#include"cinema.h"
#include"sport.h"
#include "mainwindow.h"
#include "allinclusive.h"
#include "deeppointer.h"
using std::string;

class dettClientWindow : public QDialog
{
    Q_OBJECT

public:
    explicit dettClientWindow(QWidget *parent =nullptr);
    //void caricaDati(const QStringList &,const unsigned int);
    void visualizzaDettagliCliente(deepPointer<nowqt>) const;

/*
    void resetDettCliente() const;
    void resetColoreFiltro() const;

public slots:
    void showInfoCliente();
*/
protected:
    QHBoxLayout* mainLayout, *titHLayout, *divH, *cHButton;
    QVBoxLayout *pacchVLayout, *divV;
    QPushButton *closeButton;
    QLabel *nomeClienteLabel, *cognomeClienteLabel, *codiceFiscClienteLabel, *dataNascitaClienteLabel, *emailClienteLabel, *pacchClienteLabel, *tPacch1, *offertaKidsCLabel, *descKidsLabel, *descSportLabel, *schermiContKLabel, *hdKidsLabel, *tPacch2, *offertaCinemaCLabel, *descCinemaLabel, *schermiContCLabel, *hdCinemaLabel, *tPacch3, *offertaSportCLabel, *schermiContSLabel, *hdSportLabel, *dataInizioALabel, *mesiAbbLabel, *dataFineALabel, *BcodiceScontoLabel, *tcouponLabel, *TcodiceScontoLabel, *totMeseAbbLabel, *totMesiAbbLabel;
    QGroupBox* daticlienteGroup, *statoabbGroup, *pacchetto1Group, *pacchetto2Group, *pacchetto3Group;

};

#endif // DETTCLIENTWINDOW_H
