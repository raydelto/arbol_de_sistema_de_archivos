#include <string>

class Nodo
{
    public:
        Nodo(std::string nombre);
        ~Nodo() = default;
        void AgregarHijo(Nodo* hijo);
        Nodo* GetPrimerHijo() { return _primerHijo; }
        Nodo* GetSiguiente() { return _siguiente; }
        std::string GetNombre() { return _nombre; }

    private:
        std::string _nombre;
        Nodo* _primerHijo;
        Nodo* _ultimoHijo;
        Nodo* _siguiente;
};
