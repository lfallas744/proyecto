#include "MenuPrincipal.h"

void MenuPrincipal::menuPrincial(MenuAdministrador* menuAdmi)
{
	this->ptrMenuAdmi = menuAdmi;
}

void MenuPrincipal::invocarMenu()
{
	char opc = ' ';
	do {
		system("cls");
		opc = Vista::mostrarOpciones();
		switch (opc)
		{
		case '1': menuAdministrador(); break;
		case '2': menuCobro(); break;
		case '3': break;
		default:
			Vista::errorOpcInvalida(); break;
		}

	} while (opc != '3');
	

	
}

void MenuPrincipal::menuAdministrador()
{
	ptrMenuAdmi->invocarMenu1();
}

void MenuPrincipal::menuCobro()
{
}
