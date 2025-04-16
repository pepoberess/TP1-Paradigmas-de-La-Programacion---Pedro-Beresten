#include "Magos.h"

string Magos :: getNombre() const {return nombre;}

int Magos :: getVida() const {return vida;}

int Magos :: getArmadura() const {return armadura;}

int Magos :: getResistenciaMagica() const {return resistencia_magica;}

int Magos :: getRecuperacion() const {return recuperacion;}

void Magos :: mejorarAM(unique_ptr<Armas>& arma) {
    if (ArmasMagicas* casteada = dynamic_cast<ArmasMagicas*>(arma.get())) {
        if (casteada->getNivel() < 10) casteada->subirNivel();

        else cout << "El" << casteada->getNombre() << "ya está al máximo nivel" << endl;
        delete(casteada);
    } 
    else cout << "El arma no es mágica" << endl;
    
}

void Magos :: lifeLoss(int daño) {
    cout << nombre << " recibe " << daño << " de daño!" << endl;
    vida -= daño;
    if (vida <= 0) cout << nombre << " ha muerto!" << endl;
}
