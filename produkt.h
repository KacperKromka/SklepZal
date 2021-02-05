#ifndef PRODUKT_H_INCLUDED
#define PRODUKT_H_INCLUDED

#include <string>

const int MAKS_LB_PRODUKTOW = 100;

class Produkt
{
public:
    Produkt(std::string nazwa, int ilosc, double cena);
    ~Produkt();
    void ustawNazwe(std::string nazwa);
    std::string podajNazwe();
    void ustawIlosc(int ilosc);
    int podajIlosc();
    void ustawCene(double cena);
    double podajCene();

private:
    std::string nazwa;
    int ilosc;
    double cena;

};


#endif // PRODUKT_H_INCLUDED
