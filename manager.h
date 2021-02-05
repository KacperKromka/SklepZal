#include "listaproduktow.h"
#include "widok.h"
#include "zapisodczyt.h"

#ifndef MANAGER_H_INCLUDED
#define MANAGER_H_INCLUDED

class ManagerListyProduktow
{
public:
    ManagerListyProduktow();
    ~ManagerListyProduktow();
    void pokazMenu();
    void pokazListeProduktow();
    void dodajProdukt();
    void zarzadzaj();

private:
    ListaProduktow lista;
    WidokListyProduktow widok;
    ZapisOdczytIOStream zapisOdczyt;
};


#endif // MANAGER_H_INCLUDED
