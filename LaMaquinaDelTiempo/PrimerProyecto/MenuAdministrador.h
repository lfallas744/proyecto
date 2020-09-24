#pragma once
#include"IMaquinaAdministradora.h"

class MenuAdministrador {
private:
    IMaquinaAdministradora* maquinaAdministradora;
public:
    MenuAdministrador(IMaquinaAdministradora* maquinaA);
    void invocarMenu1();
private:
    char mostrarOpciones();
    void insertarProducto();
    void modificarProducto();
    void borrarInformacion();
    void ingresarDinero();
    void retirarDinero();
};