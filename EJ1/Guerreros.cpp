#include "Guerreros.h"

string Guerreros :: getNombre() const {return nombre;}

int Guerreros :: getVida() const {return vida;}

int Guerreros :: getArmadura() const {return armadura;}

int Guerreros :: getResistenciaMagica() const {return resistencia_magica;}

int Guerreros :: getRecuperacion() const {return recuperacion;}

void Guerreros :: mejorarAC(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())) {
        if (casteada->getNivel() < 10) casteada->subirNivel();
        else cout << "El" << casteada->getNombre() << "ya está al máximo nivel" << endl;
        delete(casteada);
    }
}

void Guerreros :: lifeLoss(int daño) {
    cout << nombre << " recibe " << daño << " de daño!" << endl;
    vida -= daño;
    if (vida <= 0) cout << nombre << " ha muerto!" << endl;
}

