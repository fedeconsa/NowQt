#include "controller.h"
controller::controller(QObject *parent) : QObject(parent),view(new mainwindow()), addClientW(new addClientWindow()), dettClientW(new dettClientWindow()), m(new model("data.xml"))
{
    connect(view,SIGNAL(signOpenAddWindow()),this,SLOT(openAddView()));
    //connect(view, SIGNAL(signEsportaPDFClienti()), this, SLOT(esportaPDFClienti())); SLOT editclient
    connect(view,SIGNAL(signOpenDettWindow(const unsigned int)),this,SLOT(openDettView(const unsigned int)));
    //connect(view,SIGNAL(richiestaShowCliente(const unsigned int)),this,SLOT(mostraCliente(const unsigned int)));
    connect(m, SIGNAL(clienteAggiunto()), this, SLOT(resetListaClienti()));

    connect(addClientW, SIGNAL(erroreInput(string)), this, SLOT(errInput(string)));
    connect(addClientW, SIGNAL(erroreData(string)),this , SLOT(errData(string)));
    connect(addClientW, SIGNAL(esitoCoupon(string)), this, SLOT(esitoCoup(string)));
    connect(addClientW, SIGNAL(inviaStringaCliente(const QStringList)), this, SLOT(aggClienteContainer(const QStringList)));

    resetListaClienti();

   view->show();
}

controller::~controller()
{
}

void controller::openAddView() const
{
    addClientW->resettaInput();
    addClientW->setModal(true);
    addClientW->show();
}


void controller::openDettView(const unsigned int c) const {
            dettClientW->visualizzaDettagliCliente(m->mostraCliente(indexTranslate[c])); // è giusta
            //dettClientW->caricaDati(m->getCampiCliente(view->getIndexSelected()), view->getIndexSelected());
            dettClientW->setModal(true);
            dettClientW->show();
}

/*
void controller::mostraCliente(const unsigned int cliente){
    dettClientW->visualizzaDettagliCliente(m->mostraCliente(indexTranslate[cliente]));
}
*/

void controller::resetListaClienti()
{
    view->mostraClienti(m->getListaClientiT(indexTranslate));
}

void controller::errInput(string i)
{
    addClientW->mostraErroreInput(i);
}

void controller::errData(string d)
{
    addClientW->mostraErroreData(d);
}

void controller::esitoCoup(string e)
{
    addClientW->mostraEsitoC(e);
}


void controller::aggClienteContainer(const QStringList dettagli)
{
    m->aggNelContainer(dettagli);
}

