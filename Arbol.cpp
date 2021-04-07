#include "Arbol.h"
#include <iostream>

Arbol::Arbol(Nodo* nodo):_raiz(nodo)
{
}

void Arbol::Recorrer(Nodo* nodo)
{
    std::cout << nodo->GetNombre() << std::endl;
    Nodo* i = nodo->GetPrimerHijo();
    while(i != nullptr)
    {
        Recorrer(i);
        i = i->GetSiguiente();
    }
}

void Arbol::Recorrer()
{
    Recorrer(_raiz);
}
