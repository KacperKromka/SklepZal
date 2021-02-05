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
    void edytujProdukt();
    void usunProdukt();
private:
    ListaProduktow lista;
    WidokListyProduktow widok;
    ZapisOdczytIOStream zapisOdczyt;
    WidokProduktu wp;
};


#endif // MANAGER_H_INCLUDED
