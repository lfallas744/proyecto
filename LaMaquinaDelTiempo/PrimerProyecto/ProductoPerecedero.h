#pragma once
#include <stdio.h>
#include <ctime>
#include "Producto.h"


class ProductoPerecedero : public Producto{
private:
	//fecha FechadeVencimiento;
public:
	ProductoPerecedero(string = " ", string = " ", float = 0.0, int = 0);
	float getPrecio();
	string getFecha();
	void setFecha(string);
	float calcularDescuento();
	string toString() override;
};

