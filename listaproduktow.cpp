#include "listaproduktow.h"
#include <string>

using namespace std;

ListaProduktow::ListaProduktow()
{
    this->liczbaProduktow = 0;
}

ListaProduktow::~ListaProduktow()
{
    for(int i = 0; i < liczbaProduktow; i++)
        delete produkty[i];
}

bool ListaProduktow::dopiszProdukt(string nazwa, int ilosc, double cena)
{
    return dodajDoListy(new Produkt(nazwa,ilosc,cena));
}

bool ListaProduktow::usunProdukt(int nrProduktu)
{
    delete produkty[nrProduktu--];
    liczbaProduktow--;
}

bool ListaProduktow::dopiszProdukt(Produkt * produkt)
{
    return dodajDoListy(produkt);
}

Produkt * ListaProduktow::pobierzProdukt(int nrProduktu)
{
    if(nrProduktu < liczbaProduktow && nrProduktu >= 0)
        return produkty[nrProduktu];
    else
        return 0;
}

int ListaProduktow::podajLiczbeProduktow()
{
    return this->liczbaProduktow;
}

bool ListaProduktow::dodajDoListy(Produkt * produkt)
{
    if(produkt != 0 && liczbaProduktow < MAKS_LB_PRODUKTOW - 1)
    {
        produkty[liczbaProduktow++] = produkt;
        return true;

    }
    else
        return false;
}
