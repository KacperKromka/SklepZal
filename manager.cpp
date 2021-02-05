#include "manager.h"

using namespace std;

ManagerListyProduktow::ManagerListyProduktow()
{
    cout << "Zarzadzam lista produktow" << endl;
    zapisOdczyt.odczytaj(&lista, "produkty.txt");
}
ManagerListyProduktow::~ManagerListyProduktow()
{
    zapisOdczyt.zapisz(&lista, "produkty.txt");
    cout << endl << "Nacisnij enter by zakonczyc...";
    cin.ignore();
    cin.get();
}
void ManagerListyProduktow::pokazMenu()
{
    cout << "\n\nDostepne operacje:\n 1. Pokaz produkty\n 2. Dodaj produkt";
    cout << "\n0. Koniec";
    cout << endl << ">> ";
}
void ManagerListyProduktow::pokazListeProduktow()
{
    widok.pokazProduktyWTabeli(&lista);
}
void ManagerListyProduktow::dodajProdukt()
{
    string nazwa;
    int ilosc;
    double cena;

    cout << "Podaj nazwe: ";
    cin >> nazwa;
    cout << endl << "Podaj ilosc: ";
    cin >> ilosc;
    cout << endl << "Podaj cene: ";
    cin >> cena;

    if(lista.dopiszProdukt(nazwa, ilosc, cena))
        cout << "Dodano produkt" << endl;
    else
        cout << "Blad!";
}
void ManagerListyProduktow::zarzadzaj()
{
    const int KONIEC = 0;
    int idOpcji;

    do
    {
        pokazMenu();
        cin >> idOpcji;
        switch(idOpcji)
        {
            case 1: pokazListeProduktow();
                    break;
            case 2: dodajProdukt();
                    break;
            case 3:
                    break;
        }
    }
    while(idOpcji != KONIEC);
}
