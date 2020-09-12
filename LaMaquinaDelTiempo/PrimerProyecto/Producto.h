#pragma once

#include <iostream>
#include <sstream>

using namespace std;

class Producto{
protected:
	string nombre;
	string codigo;
	float precio;
	int cantidad;

public:
	Producto(string=" ", string=" ", float=0.0, int=0);
	~Producto();
	string getNombre();
	string getCodigo();
	virtual float getPrecio() = 0;
	int getCantidad();
	void setNombre(string);
	void setCodigo(string);
	void setPrecio(float);
	void setCantidad(int);
	virtual string toString();
};

