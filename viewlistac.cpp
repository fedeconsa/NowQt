#include "viewlistac.h"

viewListaC::viewListaC(QWidget *parent):QListWidget (parent){}

int viewListaC::getIndex() const
{
    return (int)this->selectedIndexes()[0].row();
}

bool viewListaC::isSomeoneSelected() const
{
    return !this->selectedIndexes().empty();
}

void viewListaC::unSelectIndex() const
{
    this->selectedIndexes().clear();
}
