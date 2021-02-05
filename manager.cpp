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
    cout << "\n\nDostepne operacje:\n 1. Pokaz produkty\n 2. Dodaj produkt\n 3. Edytuj produkt \n 4. Usun produkt \n";
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
void ManagerListyProduktow::edytujProdukt()
{
    int nrProduktu;
    char odp;

    cout << "Podaj numer produktu ktory chcesz edytowac (od 0 do " << lista.podajLiczbeProduktow()-1 << "): ";
    cin >> nrProduktu;
    cout << "Czy ten produkt chcesz edytowac?";
    Produkt * produkt = lista.pobierzProdukt(nrProduktu);
    wp.pokazProdukt(produkt);
    cout << "(t/n)";
    cin >> odp;
    if (odp == 't')
    {
        lista.usunProdukt(nrProduktu);
        this->dodajProdukt();
    }
}
void ManagerListyProduktow::usunProdukt()
{
    int nrProduktu;
    char odp;

    cout << "Podaj numer produktu ktory chcesz usunac (od 0 do " << lista.podajLiczbeProduktow()-1 << "): ";
    cin >> nrProduktu;
    cout << "Czy ten produkt chcesz usunac?";
    Produkt * produkt = lista.pobierzProdukt(nrProduktu);
    wp.pokazProdukt(produkt);
    cout << "(t/n)";
    cin >> odp;
    if (odp == 't')
       lista.usunProdukt(nrProduktu);

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
            case 3: edytujProdukt();
                    break;
            case 4: usunProdukt();
                    break;
        }
    }
    while(idOpcji != KONIEC);
}
