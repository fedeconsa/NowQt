#include "viewlistac.h"

viewListaC::viewListaC(QWidget *parent):QListWidget (parent){}

unsigned int viewListaC::getIndex() const
{
    return (unsigned int)this->selectedIndexes()[0].row();
}

bool viewListaC::isSomeoneSelected() const
{
    return !this->selectedIndexes().empty();
}

void viewListaC::unSelectIndex() const
{
    this->selectedIndexes().clear();
}
