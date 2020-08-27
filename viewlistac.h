#ifndef VIEWLISTAC_H
#define VIEWLISTAC_H
#include <QListWidget>

class viewListaC : public QListWidget
{
    Q_OBJECT
public:
    viewListaC(QWidget * =nullptr);

    unsigned int getIndex() const;

    bool isSomeoneSelected() const;

    void unSelectIndex() const;
};

#endif // VIEWLISTAC_H
