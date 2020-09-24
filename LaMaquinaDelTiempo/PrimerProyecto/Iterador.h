#pragma once
#include<iostream>
#include "Producto.h"
using namespace std;

class Iterador
{
private:
	Producto** coleccion;
	int cantidad;
	int posActual;
public:
	Iterador(Producto**,int);
	bool haySiguiente();
	Producto* obtenerProducto();
};

