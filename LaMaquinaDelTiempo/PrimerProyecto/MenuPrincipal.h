#pragma once
#include <iostream>
#include "Vista.h"
#include "MenuAdministrador.h"
using namespace std;

class MenuPrincipal
{
	MenuAdministrador* ptrMenuAdmi;
public:
	void menuPrincial(MenuAdministrador*);

	void invocarMenu();

	void menuAdministrador();
	void menuCobro();
};

