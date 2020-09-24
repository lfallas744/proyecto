#include "Vista.h"

char Vista::mostrarOpciones()
{
	char opcion = ' ';
	cout << '\t' << "---Menu Principal---" << '\t' << '\n';
	cout << "1) Menu Administrador" << '\n';
	cout << "2) Menu Cobro" << '\n';
	cout << "3) Salir" << '\n';
	cin >> opcion;
	return opcion;
}

string Vista::errorOpcInvalida()
{
	return"Opcion Invalida";
}
