#ifndef HISTORIAL_H
#define HISTORIAL_H
#include <iostream>

class Historial {
private:
    std::string fecha;
    std::string descripcion;
public:
    Historial(std::string fecha, std::string descripcion);
    void mostrarEvento();
};
#endif
