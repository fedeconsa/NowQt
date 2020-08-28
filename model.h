#ifndef MODEL_H
#define MODEL_H

#include "container.h"
#include "deeppointer.h"
#include "nowqt.h"
#include "kids.h"
#include "cinema.h"
#include "sport.h"
#include "allinclusive.h"
#include <QString>
#include <QFile>
#include <QMap>
class model : public QObject
{

    Q_OBJECT

public:
    model(QString path);
    ~model();
    QStringList getCampiCliente(const unsigned int) const;
    deepPointer<nowqt> mostraCliente(const unsigned int) const;
    QStringList getListaClientiT(QMap<unsigned int,unsigned int> &) const;

    bool getModificato() const;
    QStringList getListaClientiPDF() const;

public slots:
    void aggNelContainer(const QStringList);
signals:
    void clienteAggiunto();
private:
    QString path;
    container<deepPointer<nowqt>> *datiTotali;

bool modificato;

};

#endif
