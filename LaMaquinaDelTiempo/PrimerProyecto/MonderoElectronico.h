#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class MonderoElectronico
{
private:
	int dinero;

public:
    MonderoElectronico();
    MonderoElectronico(int);
    ~MonderoElectronico() = default;

    int getDinero() const;
    void setDinero(int dinero);

    string desgloceVuelto(int);

    string toString();

};

