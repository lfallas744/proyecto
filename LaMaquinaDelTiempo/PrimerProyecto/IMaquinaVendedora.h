#pragma once
#include<iostream>
using namespace std;

class IMaquinaVendedora {
	virtual string getNombre() = 0;
	virtual string realizarCompra(string id, int cantidad, int montoPago) = 0;
	virtual string toString() = 0;
};