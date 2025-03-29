#include <iostream>
#include "Usuario.h"
#include "Mascota.h"
#include "Objeto.h"

int main() {
    Usuario usuario1("Carlos", 1);
    Mascota* mascota1 = new Mascota("Firulais");
    usuario1.adoptarMascota(mascota1);
    Objeto snack("Galleta", "Comida", "Recupera energía");
    usuario1.brindarObjeto("Firulais", snack);
    usuario1.consultarHistorial("Firulais");
    std::cout << usuario1.getNombre() << " adoptó a " << mascota1->getNombre() << std::endl;
    delete mascota1;
    return 0;
}
