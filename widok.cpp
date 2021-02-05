#include "widok.h"
#include <iostream>

using namespace std;

void WidokProduktu::pokazProdukt(Produkt * produkt)
{
    cout << endl << "Nazwa: " << produkt->podajNazwe();
    cout << endl << "Ilosc: " << produkt->podajIlosc();
    cout << endl << " Cena: " << produkt->podajCene();
}
void WidokProduktu::pokazProduktWLinii(Produkt * produkt)
{
    cout << produkt->podajNazwe() << ' ';
    cout << produkt->podajIlosc() << ' ';
    cout << produkt->podajCene()  << ' ' << endl;
}

void WidokListyProduktow::pokazProdukty(ListaProduktow * lista)
{
    if(lista->podajLiczbeProduktow() <= 0)
        return;

    for(int i = 0; i < lista->podajLiczbeProduktow(); ++i)
        WidokProduktu::pokazProdukt(lista->pobierzProdukt(i));
}
void WidokListyProduktow::pokazProduktyWTabeli(ListaProduktow * lista)
{
    if(lista->podajLiczbeProduktow() <= 0)
        return;

    cout << "Nazwa Ilosc Cena" << endl;
    for(int i = 0; i < lista->podajLiczbeProduktow(); ++i)
        WidokProduktu::pokazProduktWLinii(lista->pobierzProdukt(i));
}
