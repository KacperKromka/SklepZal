#include "produkt.h"
#include <string>

using namespace std;

Produkt::Produkt(string nazwa, int ilosc, double cena)
{
   if(nazwa.empty())
     Produkt::nazwa = "Nieznany produkt";
   else
     this->nazwa = nazwa;

   if(ilosc < 0)
     Produkt::ilosc = 0;
    else
     this->ilosc = ilosc;

   if(cena < 0)
     Produkt::cena = 0;
   else
     this->cena = cena;
}
Produkt::~Produkt()
{
    /// TODO
}
void Produkt::ustawNazwe(string nazwa)
{
     this->nazwa = nazwa;
}
string Produkt::podajNazwe()
{
    return this->nazwa;
}
void Produkt::ustawIlosc(int ilosc)
{
    this->ilosc = ilosc;
}
int Produkt::podajIlosc()
{
    return this->ilosc;
}
void Produkt::ustawCene(double cena)
{
    this->cena = cena;
}
double Produkt::podajCene()
{
    return this->cena;
}
