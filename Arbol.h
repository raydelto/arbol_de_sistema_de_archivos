#include "Nodo.h"

class Arbol
{
    public:
        Arbol(Nodo* nodo);
        ~Arbol() = default;
        void Recorrer(Nodo* nodo);
        void Recorrer();

    private:
        Nodo* _raiz;

};
