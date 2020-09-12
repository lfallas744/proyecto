#include "ProductoNoPerecedero.h"


ProductoNoPerecedero::ProductoNoPerecedero(string nombre, string codigo, float precio, int cantidad, float porcentaje):Producto(nombre, codigo, precio, cantidad) {
	
	this->porcentajeDeDescuento = porcentaje;

}

float ProductoNoPerecedero::calcularDescuento() {

	return this->precio * (porcentajeDeDescuento / 100);
}

float ProductoNoPerecedero::getPrecio() {

	return this->precio-calcularDescuento();
}

float ProductoNoPerecedero::getPorcentaje() {

	return this->porcentajeDeDescuento;
}

void ProductoNoPerecedero::setPorcentaje(float porcentaje) {

	this->porcentajeDeDescuento = porcentaje;
}

string ProductoNoPerecedero::toString() {
	stringstream s;
	s << Producto::toString();
	s << "Descuento por aplicar al producto: " << calcularDescuento() << endl;
	s << "Precio total del Producto: " << this->getPrecio()<<endl;
	return s.str();
}