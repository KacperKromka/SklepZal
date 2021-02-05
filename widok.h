#include <iostream>
#include "produkt.h"
#include "listaproduktow.h"

#ifndef WIDOK_H_INCLUDED
#define WIDOK_H_INCLUDED

class WidokProduktu
{
public:
    static void pokazProdukt(Produkt * produkt);
    static void pokazProduktWLinii(Produkt * produkt);
};

class WidokListyProduktow
{
public:
    void pokazProdukty(ListaProduktow * lista);
    void pokazProduktyWTabeli(ListaProduktow * lista);
};
#endif // WIDOK_H_INCLUDED
