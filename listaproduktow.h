#include <string>
#include "produkt.h"

#ifndef LISTAPRODUKTOW_H_INCLUDED
#define LISTAPRODUKTOW_H_INCLUDED

class ListaProduktow
{
public:
    ListaProduktow();
    ~ListaProduktow();
    bool dopiszProdukt(std::string nazwa, int ilosc, double cena);
    bool dopiszProdukt(Produkt * produkt);
    bool usunProdukt(int nrProduktu);
    Produkt * pobierzProdukt(int nrProduktu);
    int podajLiczbeProduktow();
private:
    int liczbaProduktow;
    Produkt * produkty[MAKS_LB_PRODUKTOW];
    bool dodajDoListy(Produkt * produkt);

};


#endif // LISTAPRODUKTOW_H_INCLUDED
