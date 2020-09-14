#include "MonderoElectronico.h"

MonderoElectronico::MonderoElectronico()
{
    this->dinero = 100000;
}

MonderoElectronico::MonderoElectronico(int dineroIncial)
{
    this->dinero = dineroIncial;
}

int MonderoElectronico::getDinero() const
{
    return dinero;
}

void MonderoElectronico::setDinero(int dinero)
{
    this->dinero = dinero;
}

string MonderoElectronico::desgloceVuelto(int dineroPago)
{
    stringstream s;
    int moneda100=0, moneda500=0, billete1000=0, billete2000=0, aux=dineroPago;
    if (dinero >= dineroPago && dineroPago>0) {
        do {
            if (aux >= 2000) {
                billete2000 = aux / 2000;
                aux %= 2000;
            }
            else {
                if (aux >= 1000) {
                    billete1000 = aux / 1000;
                    aux %= 1000;
                }
                else {
                    if (aux >= 500) {
                        moneda500 = aux / 500;
                        aux %= 500;
                    }
                    else {
                        if (aux >= 100) {
                            moneda100 = aux / 100;
                            aux %= 100;
                        }
                    }
                }
            }
        } while (aux != 0);
        
        s << "El desglose de su vuelto es el siguiente: " << '\n';
        s << billete2000 << " Billetes de 2000" << '\n' << billete1000 << " billetes de 1000" << '\n' << moneda500 << " monedas de 500" << '\n' << moneda100 << " monedas de 100";
    }
    else {
        s << "Lo sentimos no contamos con dinero suficiente para realizar la transaccion";
    }
    return s.str();
}

string MonderoElectronico::toString()
{
    stringstream s;
    s << "El monedero tiene: " << dinero << " a su disposicion" << '\n';
    return s.str();
}

