#include "ProductoPerecedero.h"

ProductoPerecedero::ProductoPerecedero(string nomPro, string cod, float prec, int canti):Producto(nomPro, cod, prec, canti) {


}

float ProductoPerecedero::getPrecio() {

	return 0.0;
}

string ProductoPerecedero::getFecha() {
	return " ";
}
void ProductoPerecedero::setFecha(string) {

}
float ProductoPerecedero::calcularDescuento() {
	return 0;
}
string ProductoPerecedero::toString() {

	stringstream s;
	s << Producto::toString();
	s << "Descuento por aplicar al producto: " << calcularDescuento() << endl;
	s << "Precio total del Producto: " << this->getPrecio() << endl;
	return s.str();
}
