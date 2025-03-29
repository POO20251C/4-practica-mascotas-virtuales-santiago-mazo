#include "Usuario.h"
Usuario::Usuario(std::string nombre, int id) : nombre(nombre), ID(id) {}
void Usuario::adoptarMascota(Mascota* mascota) { mascotas[mascota->getNombre()] = mascota; }
void Usuario::consultarHistorial(std::string mascotaNombre) {
    if (mascotas.find(mascotaNombre) != mascotas.end())
        mascotas[mascotaNombre]->mostrarHistorial();
}
void Usuario::brindarObjeto(std::string mascotaNombre, Objeto objeto) {
    if (mascotas.find(mascotaNombre) != mascotas.end())
        mascotas[mascotaNombre]->usarObjeto(objeto);
}
std::string Usuario::getNombre() const { return nombre; }