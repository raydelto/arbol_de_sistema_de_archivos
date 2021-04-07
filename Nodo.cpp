#include "Nodo.h"
Nodo::Nodo(std::string nombre):
    _nombre(nombre)
    ,_primerHijo(nullptr)
    ,_ultimoHijo(nullptr)
    ,_siguiente(nullptr)
{
}

void Nodo::AgregarHijo(Nodo* hijo)
{
    if(_primerHijo == nullptr)//la lista de hijos está vacía
    {
        _primerHijo = hijo;
        _ultimoHijo = hijo;
    }
    else //Si la lista no está vacía
    {
        _ultimoHijo->_siguiente = hijo;
        _ultimoHijo = hijo;
    }
}
