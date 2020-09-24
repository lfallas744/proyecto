#pragma once
#include "MenuPrincipal.h"
#include "MenuAdministrador.h"
#include "IMaquinaAdministradora.h"
#include "Maquina.h"
class Bootstrapper {
public:
	static void correrApp() {
		
		IMaquinaAdministradora* IMaquinaAd = new Maquina;
		MenuAdministrador* menuAdmi = new MenuAdministrador(IMaquinaAd);

		MenuPrincipal* menuPrincipal = new MenuPrincipal;
		menuPrincipal->invocarMenu();

		delete IMaquinaAd;
		delete menuAdmi;
		delete menuPrincipal;
	}
};
