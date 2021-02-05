#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "listaproduktow.h"

#ifndef ZAPISODCZYT_H_INCLUDED
#define ZAPISODCZYT_H_INCLUDED

class ZapisOdczytSTDIO
{
public:
    bool zapisz(ListaProduktow * lista, char nazwa[]);
    bool odczytaj(ListaProduktow *lista, char nazwa[]);

};

class ZapisOdczytIOStream
{
public:
    bool zapisz(ListaProduktow* lista, char nazwa[]);
    bool odczytaj(ListaProduktow *lista, char nazwa[]);
};

#endif // ZAPISODCZYT_H_INCLUDED
