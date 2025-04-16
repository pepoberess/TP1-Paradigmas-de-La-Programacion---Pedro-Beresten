#include "MagosDerivados.h"

void Hechicero :: autoHealing() {
    cout << nombre << " se cura 400 de vida!" << endl;
    vida += 400;
}

void Hechicero :: recargaEnergia(unique_ptr<Armas>& arma) {
    if (ArmasMagicas* casteada = dynamic_cast<ArmasMagicas*>(arma.get())){
        if (casteada->getMana() >= casteada->getManaMax()) {
            cout << "No puedes recargar más maná, ya tienes el máximo!" << endl;
            return;
        }
        int nueva_mana;
        if (casteada->getMana() < casteada->getManaMax() * 0.2) nueva_mana = casteada->getManaMax() * (recuperacion * 0.1);
        else nueva_mana = casteada->getMana() * recuperacion;
        casteada->recargarMana(nueva_mana);
        delete(casteada);
    }
    else cout << "El arma debe ser mágica" << endl;
}

int Hechicero :: superAttack(unique_ptr<Armas>& arma) {
    if (ArmasMagicas* casteada = dynamic_cast<ArmasMagicas*>(arma.get())){
        int h = arma->habilidad();
        int d = arma->definitiva();
        delete(casteada);
        return h + d;
    }
    else {
        cout << "El arma debe ser mágica" << endl;
        return 0;
    }
}

void Hechicero :: increaseDefense() {
    cout << nombre << " aumenta su defensa en 30!" << endl;
    armadura += 30;
    resistencia_magica += 30;
}

int Hechicero :: tanqueo(Armas& arma, int daño) {
    if (dynamic_cast<ArmasMagicas*>(&arma)) daño -= resistencia_magica * 0.05;
    else daño -= armadura * 0.1;
    return daño;
}

void Conjurador :: autoHealing() {
    cout << nombre << " se cura 350 de vida!" << endl;
    vida += 350;
}

void Conjurador :: recargaEnergia(unique_ptr<Armas>& arma) {
    if (ArmasMagicas* casteada = dynamic_cast<ArmasMagicas*>(arma.get())){
        if (casteada->getMana() >= casteada->getManaMax()) {
            cout << "No puedes recargar más maná, ya tienes el máximo!" << endl;
            return;
        }
        int nueva_mana;
        if (casteada->getMana() < casteada->getManaMax() * 0.2) nueva_mana = casteada->getManaMax() * (recuperacion * 0.1);
        else nueva_mana = casteada->getMana() * recuperacion;
        casteada->recargarMana(nueva_mana);
        delete(casteada);
    }
    else cout << "El arma debe ser mágica" << endl;
}

int Conjurador :: superAttack(unique_ptr<Armas>& arma) {
    if (ArmasMagicas* casteada = dynamic_cast<ArmasMagicas*>(arma.get())){
        int h = arma->habilidad();
        int d = arma->definitiva();
        delete(casteada);
        return h + d;
    }
    else {
        cout << "El arma debe ser mágica" << endl;
        return 0;
    }
}

void Conjurador :: increaseDefense() {
    cout << nombre << " aumenta su armadura en 25 y su resistencia mágica en 35!" << endl;
    armadura += 25;
    resistencia_magica += 35;
}

int Conjurador :: tanqueo(Armas& arma, int daño) {
    if (dynamic_cast<ArmasMagicas*>(&arma)) daño -= resistencia_magica * 0.05;
    else daño -= armadura * 0.1;
    return daño;
}

void Brujo :: autoHealing() {
    cout << nombre << " se cura 300 de vida!" << endl;
    vida += 300;
}

void Brujo :: recargaEnergia(unique_ptr<Armas>& arma) {
    if (ArmasMagicas* casteada = dynamic_cast<ArmasMagicas*>(arma.get())){
        if (casteada->getMana() >= casteada->getManaMax()) {
            cout << "No puedes recargar más maná, ya tienes el máximo!" << endl;
            return;
        }
        int nueva_mana;
        if (casteada->getMana() < casteada->getManaMax() * 0.2) nueva_mana = casteada->getManaMax() * (recuperacion * 0.1);
        else nueva_mana = casteada->getMana() * recuperacion;
        casteada->recargarMana(nueva_mana);
        delete(casteada);
    }
    else cout << "El arma debe ser mágica" << endl;
}

int Brujo :: superAttack(unique_ptr<Armas>& arma) {
    if (ArmasMagicas* casteada = dynamic_cast<ArmasMagicas*>(arma.get())){
        int h = arma->habilidad();
        int d = arma->definitiva();
        delete(casteada);
        return h + d;
    }
    else {
        cout << "El arma debe ser mágica" << endl;
        return 0;
    }
}

void Brujo :: increaseDefense() {
    cout << nombre << " gana 20 de armadura y 40 de resistencia mágica!" << endl;
    armadura += 20;
    resistencia_magica += 40;
}

int Brujo :: tanqueo(Armas& arma, int daño) {
    if (dynamic_cast<ArmasMagicas*>(&arma)) daño -= resistencia_magica * 0.05;
    else daño -= armadura * 0.1;
    return daño;
}

void Nigromante :: autoHealing() {
    cout << nombre << " se cura 450 de vida!" << endl;
    vida += 450;
}

void Nigromante :: recargaEnergia(unique_ptr<Armas>& arma) {
    if (ArmasMagicas* casteada = dynamic_cast<ArmasMagicas*>(arma.get())){
        if (casteada->getMana() >= casteada->getManaMax()) {
            cout << "No puedes recargar más maná, ya tienes el máximo!" << endl;
            return;
        }
        int nueva_mana;
        if (casteada->getMana() < casteada->getManaMax() * 0.2) nueva_mana = casteada->getManaMax() * (recuperacion * 0.1);
        else nueva_mana = casteada->getMana() * recuperacion;
        casteada->recargarMana(nueva_mana);
        delete(casteada);
    }
    else cout << "El arma debe ser mágica" << endl;
}

int Nigromante :: superAttack(unique_ptr<Armas>& arma) {
    if (ArmasMagicas* casteada = dynamic_cast<ArmasMagicas*>(arma.get())){
        int h = arma->habilidad();
        int d = arma->definitiva();
        delete(casteada);
        return h + d;
    }
    else {
        cout << "El arma debe ser mágica" << endl;
        return 0;
    }
}

void Nigromante :: increaseDefense() {
    cout << nombre << " se fortalece con 15 más de armadura y 50 de resistencia mágica!" << endl;
    armadura += 15;
    resistencia_magica += 50;
}

int Nigromante :: tanqueo(Armas& arma, int daño) {
    if (dynamic_cast<ArmasMagicas*>(&arma)) daño -= resistencia_magica * 0.05;
    else daño -= armadura * 0.1;
    return daño;
}
