#pragma once
#include "Producto.h"


class ProductoNoPerecedero : public Producto {
private:

	float porcentajeDeDescuento;

public:
	ProductoNoPerecedero(string = " ", string = " ", float = 0.0, int = 0, float = 0.0);
	float getPrecio();
	float getPorcentaje();
	void setPorcentaje(float);
	float calcularDescuento();
	string toString() override;
};

