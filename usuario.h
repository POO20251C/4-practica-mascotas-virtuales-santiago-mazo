#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
#include <map>
#include "Mascota.h"

class Usuario {
private:
    std::string nombre;
    int ID;
    std::map<std::string, Mascota*> mascotas;
public:
    Usuario(std::string nombre, int id);
    void adoptarMascota(Mascota* mascota);
    void consultarHistorial(std::string mascotaNombre);
    void brindarObjeto(std::string mascotaNombre, Objeto objeto);
    std::string getNombre() const;
};
#endif
