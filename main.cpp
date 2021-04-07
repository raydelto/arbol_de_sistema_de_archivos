#include <iostream>
#include "Arbol.h"

int main()
{
    Nodo* raiz = new Nodo("/");
    Nodo* musica = new Nodo("Musica");
    raiz->AgregarHijo(musica);
    Nodo* merengue = new Nodo("Merengue");
    Nodo* salsa = new Nodo("Salsa");
    Nodo* jazz = new Nodo("Jazz");
    Nodo* bossanova = new Nodo("Bossanova");
    musica->AgregarHijo(merengue);
    musica->AgregarHijo(salsa);
    musica->AgregarHijo(jazz);
    musica->AgregarHijo(bossanova);

    
    Nodo* documentos = new Nodo("Documentos");
    raiz->AgregarHijo(documentos);
    Nodo* articulos = new Nodo("Artículos");
    Nodo* itla = new Nodo("ITLA");
    documentos->AgregarHijo(articulos);
    documentos->AgregarHijo(itla);
    Arbol* arbol = new Arbol(raiz);
    arbol->Recorrer();
    return 0;
}
