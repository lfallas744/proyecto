#include "Iterador.h"

Iterador::Iterador(Producto** coleccion,int cantidad)
{
	this->coleccion = coleccion;
	this->cantidad = cantidad;
	this->posActual = 0;
}

bool Iterador::haySiguiente()
{
	if (posActual >= cantidad)
		return false;
	return true;
}

Producto* Iterador::obtenerProducto()
{
	if (haySiguiente()==true) {
		Producto* obj = this->coleccion[this->posActual];
		this->posActual++;
		return obj;
	}
	return nullptr;
}
