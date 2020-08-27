#include "dettclientwindow.h"

dettClientWindow::dettClientWindow(QWidget *parent) : QDialog(parent), pacchetto1Group(new QGroupBox(this)), pacchetto2Group(new QGroupBox(this)), pacchetto3Group(new QGroupBox(this)), nomeClienteLabel(new QLabel(this)), cognomeClienteLabel(new QLabel(this)), codiceFiscClienteLabel(new QLabel(this)), dataNascitaClienteLabel(new QLabel(this)), emailClienteLabel(new QLabel(this)), pacchClienteLabel(new QLabel(this)), tPacch1(new QLabel(this)), offertaKidsCLabel(new QLabel(this)), descKidsLabel(new QLabel(this)), schermiContKLabel(new QLabel(this)), hdKidsLabel(new QLabel(this)), tPacch2(new QLabel(this)), offertaCinemaCLabel(new QLabel(this)), descCinemaLabel(new QLabel(this)), schermiContCLabel(new QLabel(this)), hdCinemaLabel(new QLabel(this)), tPacch3(new QLabel(this)), offertaSportCLabel(new QLabel(this)), descSportLabel(new QLabel(this)), schermiContSLabel(new QLabel(this)), hdSportLabel(new QLabel(this)), dataInizioALabel(new QLabel(this)), mesiAbbLabel(new QLabel(this)), dataFineALabel(new QLabel(this)), BcodiceScontoLabel(new QLabel(this)), tcouponLabel(new QLabel(this)), TcodiceScontoLabel(new QLabel(this)), totMeseAbbLabel(new QLabel(this)), totMesiAbbLabel(new QLabel(this))
 {
    setMinimumSize(1000,400);
    setWindowTitle("Finestra dettagli cliente");
    mainLayout = new QHBoxLayout(this);
    divH= new QHBoxLayout();

    QFormLayout *form1Layout = new QFormLayout();
    QVBoxLayout *pacchVLayout = new QVBoxLayout();
    QFormLayout *form3Layout = new QFormLayout();

    QGroupBox *daticlienteGroup = new QGroupBox("Dati cliente");
    daticlienteGroup->setAlignment(Qt::AlignCenter);
    // nome, cognome, data di nascita, codice fiscale, email,
    QLabel *nomeLabel = new QLabel(tr("Nome: "));
    QLabel *cognomeLabel = new QLabel(tr("Cognome: "));
    QLabel *codFiscLabel = new QLabel(tr("Codice fiscale: "));
    QLabel *dateNascitaLabel = new QLabel("Data di nascita: ");
    QLabel *emailLabel = new QLabel(tr("Indirizzo email: "));

    form1Layout->addRow(nomeLabel, nomeClienteLabel);
    form1Layout->addRow(cognomeLabel, cognomeClienteLabel);
    form1Layout->addRow(codFiscLabel, codiceFiscClienteLabel);
    form1Layout->addRow(dateNascitaLabel, dataNascitaClienteLabel);
    form1Layout->addRow(emailLabel, emailClienteLabel);

    daticlienteGroup->setLayout(form1Layout);
    divH->addWidget(daticlienteGroup);

    titHLayout= new QHBoxLayout();
    QLabel *pacchLabel= new QLabel(tr("Pacchetto scelto: ")); // "ALL INCLUSIVE - KIDS + CINEMA + SPORT" oppure "KIDS" oppure "CINEMA" oppure "SPORT"
    pacchLabel->setAlignment(Qt::AlignCenter);
    titHLayout->addWidget(pacchLabel);
    titHLayout->addWidget(pacchClienteLabel);
    pacchVLayout->addLayout(titHLayout);

    // pacchetti si / no,

    pacchVLayout->addWidget(pacchetto1Group);
    QFormLayout *formKLayout = new QFormLayout();

    tPacch1->setText("Pacchetto 1: ");
    QLabel *dPacch1= new QLabel(tr("Descrizione: "));
    QLabel *scPacch1= new QLabel(tr("Schermi in cont.: "));
    QLabel *hdPacch1= new QLabel(tr("HD incluso: "));

    formKLayout->addRow(tPacch1, offertaKidsCLabel);
    formKLayout->addRow(dPacch1, descKidsLabel);
    formKLayout->addRow(scPacch1, schermiContKLabel );
    formKLayout->addRow(hdPacch1, hdKidsLabel);
    pacchetto1Group->setLayout(formKLayout);

    pacchVLayout->addWidget(pacchetto2Group);
    QFormLayout *formCLayout = new QFormLayout();

    tPacch2->setText("Pacchetto 2: "); // string
    QLabel *dPacch2= new QLabel(tr("Descrizione: ")); // string
    QLabel *scPacch2= new QLabel(tr("Schermi in cont.: ")); // unsigned int
    QLabel *hdPacch2= new QLabel(tr("HD incluso: ")); // si / no

    formCLayout->addRow(tPacch2, offertaCinemaCLabel);
    formCLayout->addRow(dPacch2, descCinemaLabel);
    formCLayout->addRow(scPacch2, schermiContCLabel);
    formCLayout->addRow(hdPacch2, hdCinemaLabel);

    pacchetto2Group->setLayout(formCLayout);

    pacchVLayout->addWidget(pacchetto3Group);
    QFormLayout *formSLayout = new QFormLayout();

    tPacch3->setText("Pacchetto 3: ");
    QLabel *dPacch3= new QLabel(tr("Descrizione: "));
    QLabel *scPacch3= new QLabel(tr("Schermi in cont.: "));
    QLabel *hdPacch3= new QLabel(tr("Super HD incluso: "));

    formSLayout->addRow(tPacch3, offertaSportCLabel);
    formSLayout->addRow(dPacch3, descSportLabel);
    formSLayout->addRow(scPacch3, schermiContSLabel);
    formSLayout->addRow(hdPacch3, hdSportLabel);

    pacchetto3Group->setLayout(formSLayout);
    divH->addLayout(pacchVLayout);
    QGroupBox *statoabbGroup = new QGroupBox("Stato dell'abbonamento");
    statoabbGroup->setAlignment(Qt::AlignCenter);
    // data scadenza , data inizio , totale.. sconto
    QLabel *dateInAbbLabel = new QLabel("Data inizio abbonamento: ");
    QLabel *dateFiAbbLabel = new QLabel("Data fine abbonamento: ");
    QLabel *mesiLabel = new QLabel(tr("Mesi: "));
    QLabel *bcouponLabel = new QLabel(tr("Codice sconto applicato: ")); // si / no
    tcouponLabel->setText("Nome codice: "); // UNIPD
    QLabel *totLabel = new QLabel(tr("Totale euro al mese: "));
    QLabel *totalepagLabel = new QLabel(tr("Totale euro per tutti i mesi: "));

    form3Layout->addRow(dateInAbbLabel, dataInizioALabel);
    form3Layout->addRow(dateFiAbbLabel, dataFineALabel);
    form3Layout->addRow(mesiLabel, mesiAbbLabel);
    form3Layout->addRow(bcouponLabel, BcodiceScontoLabel);
    form3Layout->addRow(tcouponLabel, TcodiceScontoLabel);
    form3Layout->addRow(totLabel, totMeseAbbLabel);
    form3Layout->addRow(totalepagLabel, totMesiAbbLabel);

    statoabbGroup->setLayout(form3Layout);
    divH->addWidget(statoabbGroup);

    closeButton = new QPushButton("Chiudi",this);
    closeButton->setFixedWidth(70);
    cHButton= new QHBoxLayout();
    cHButton->setAlignment(Qt::AlignBottom | Qt::AlignRight);
    divV= new QVBoxLayout();

    divV->addLayout(divH);
    cHButton->addWidget(closeButton);
    divV->addLayout(cHButton);
    mainLayout->addLayout(divV);

    setLayout(mainLayout);

    connect(closeButton, SIGNAL(clicked()), this, SLOT(close()));

}

void dettClientWindow::visualizzaDettagliCliente(deepPointer<nowqt> clienteDaVisualizzare) const
{
    QString nome = QString::fromStdString(clienteDaVisualizzare->getNome());
    nomeClienteLabel->clear();
    nomeClienteLabel->setText(nome);
    QString cognome = QString::fromStdString(clienteDaVisualizzare->getCognome());
    cognomeClienteLabel->clear();
    cognomeClienteLabel->setText(cognome);
    QString cf = QString::fromStdString(clienteDaVisualizzare->getCodFisc());
    codiceFiscClienteLabel->clear();
    codiceFiscClienteLabel->setText(cf);
    dataNascitaClienteLabel->clear();
    dataNascitaClienteLabel->setText(clienteDaVisualizzare->getDataN().toString("dd/MM/yyyy"));
    QString email =  QString:: fromStdString(clienteDaVisualizzare->getEMail());
    emailClienteLabel->clear();
    emailClienteLabel->setText(email);
    dataInizioALabel->clear();
    dataInizioALabel->setText(clienteDaVisualizzare->getDataInAbb().toString("dd/MM/yyyy"));
    mesiAbbLabel->clear();
    QString m= QString::number(clienteDaVisualizzare->getMesi());
    mesiAbbLabel->setText(m);
    BcodiceScontoLabel->clear();
    if (clienteDaVisualizzare->isCodSconto()) {
        BcodiceScontoLabel->setText("Sì");
        TcodiceScontoLabel->clear();
        TcodiceScontoLabel->setText(QString::fromStdString(clienteDaVisualizzare->getCoupon()));
    }
    else {
        BcodiceScontoLabel->setText("No");
        tcouponLabel->hide();
        TcodiceScontoLabel->hide();
    }

    totMeseAbbLabel->clear();
    QString t= QString::number(clienteDaVisualizzare->getTot());
    totMeseAbbLabel->setText(t);
    totMesiAbbLabel->clear();
    totMesiAbbLabel->setText("Sistemare"); // sistemare questa funzione

    pacchClienteLabel->clear();
    offertaKidsCLabel->clear();
    offertaCinemaCLabel->clear();
    offertaSportCLabel->clear();
    descKidsLabel->clear();
    descCinemaLabel->clear();
    descSportLabel->clear();
    schermiContKLabel->clear();
    schermiContCLabel->clear();
    schermiContSLabel->clear();
    hdKidsLabel->clear();
    hdCinemaLabel->clear();
    hdSportLabel->clear();

    if (dynamic_cast<allinclusive*>(&(*(clienteDaVisualizzare))) != nullptr) {
        auto abbai = dynamic_cast<allinclusive*>(&(*(clienteDaVisualizzare)));
        QString k = QString::fromStdString(abbai->getTitoloK());
        QString c = QString::fromStdString(abbai->getTitoloC());
        QString s = QString::fromStdString(abbai->getTitoloS());

        pacchClienteLabel->setText("All inclusive: \n"+k+" + "+c+" + "+s);
        offertaKidsCLabel->setText(QString::fromStdString(abbai->getTitoloK()));
        descKidsLabel->setText(QString::fromStdString(abbai->getDescK()));
        schermiContKLabel->setText(QString::number(abbai->getSchermiContK()));
        if (abbai->isHdK()) {
            hdKidsLabel->setText("Sì");
        }
        else {
            hdKidsLabel->setText("No");
        }

        offertaCinemaCLabel->setText(QString::fromStdString(abbai->getTitoloC()));
        descCinemaLabel->setText(QString::fromStdString(abbai->getDescC()));
        schermiContCLabel->setText(QString::number(abbai->getSchermiContC()));
        if (abbai->isHdC()) {
            hdCinemaLabel->setText("Sì");
        }
        else {
            hdCinemaLabel->setText("No");
        }

        offertaSportCLabel->setText(QString::fromStdString(abbai->getTitoloS()));
        descSportLabel->setText(QString::fromStdString(abbai->getDescS()));
        schermiContSLabel->setText(QString::number(abbai->getSchermiContS()));
        if (abbai->isSuperHdS()) {
            hdSportLabel->setText("Sì");
        }
        else {
            hdSportLabel->setText("No");
        }
    }

    else if (dynamic_cast<kids*>(&(*(clienteDaVisualizzare))) != nullptr) {
        auto abbk = dynamic_cast<kids*>(&(*(clienteDaVisualizzare)));
        QString k = QString::fromStdString(abbk->getTitoloK());
        pacchClienteLabel->setText(k);
        pacchetto2Group->setVisible(false);
        pacchetto3Group->setVisible(false);
        tPacch1->hide();
        offertaKidsCLabel->hide();
        descKidsLabel->setText(QString::fromStdString(abbk->getDescK()));
        schermiContKLabel->setText(QString::number(abbk->getSchermiContK()));
        if (abbk->isHdK()) {
            hdKidsLabel->setText("Sì");
        }
        else {
            hdKidsLabel->setText("No");
        }

    }
    else if (dynamic_cast<cinema*>(&(*(clienteDaVisualizzare))) != nullptr) {
        auto abbc = dynamic_cast<cinema*>(&(*(clienteDaVisualizzare)));
        QString c = QString::fromStdString(abbc->getTitoloC());
        pacchClienteLabel->setText(c);
        pacchetto1Group->setVisible(false);
        pacchetto3Group->setVisible(false);
        tPacch2->hide();
        offertaCinemaCLabel->hide();
        descCinemaLabel->setText(QString::fromStdString(abbc->getDescC()));
        schermiContCLabel->setText(QString::number(abbc->getSchermiContC()));
        if (abbc->isHdC()) {
            hdCinemaLabel->setText("Sì");
        }
        else {
            hdCinemaLabel->setText("No");
        }

    }
    else if (dynamic_cast<sport*>(&(*(clienteDaVisualizzare))) != nullptr) {
        auto abbs = dynamic_cast<sport*>(&(*(clienteDaVisualizzare)));
        QString s = QString::fromStdString(abbs->getTitoloS());
        pacchClienteLabel->setText(s);
        pacchetto1Group->setVisible(false);
        pacchetto2Group->setVisible(false);
        tPacch3->hide();
        offertaSportCLabel->hide();
        descSportLabel->setText(QString::fromStdString(abbs->getDescS()));
        schermiContSLabel->setText(QString::number(abbs->getSchermiContS()));
        if (abbs->isSuperHdS()) {
            hdSportLabel->setText("Sì");
        }
        else {
            hdSportLabel->setText("No");
        }
    }
}


/*void dettClientWindow::caricaDati(const QStringList& c, const unsigned int i){
    ind = i;
    abbonamentoPiscinaCheckbox->setChecked(c.at(17)=="true"? true : false);
    if (abbonamentoPiscinaCheckbox->isChecked()==true)
    {
        piscinaGroup->setVisible(true);
        dateScadPiscina->setDate(QDate::fromString(c.at(11)));
        nomeIstruttorePiscinaEdit->setText(c.at(12));
        corsoNuotoCheckbox->setChecked(c.at(13)=="true"? true : false);
    }
    else
        piscinaGroup->setVisible(false);

    abbonamentoPalestraCheckbox->setChecked(c.at(18)=="true"? true : false);
    if (abbonamentoPalestraCheckbox->isChecked()==true)
    {
        palestraGroup->setVisible(true);
        dateScadPalestra->setDate(QDate::fromString(c.at(14)));
        nomeIstruttorePalestraEdit->setText(c.at(15));
        schedaPalestraCheckbox->setChecked(c.at(16)=="true"? true : false);
    }
    else
        palestraGroup->setVisible(false);

    nomeLineEdit->setText(c.at(0));
    cognomeLineEdit->setText(c.at(1));
    codFiscLineEdit->setText(c.at(2));
    ldnLineEdit->setText(c.at(3));
    residenzaLineEdit->setText(c.at(4));
    viaLineEdit->setText(c.at(5));
    numeroviaLineEdit->setText(c.at(6));
    telefonoLineEdit->setText(c.at(7));
    mailLineEdit->setText(c.at(8));
    dateNascita->setDate(QDate::fromString(c.at(9)));
    studenteCheckbox->setChecked(c.at(10)=="true"? true : false);
}
*/
