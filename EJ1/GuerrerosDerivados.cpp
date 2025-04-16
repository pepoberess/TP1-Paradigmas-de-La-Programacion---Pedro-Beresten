#include "GuerrerosDerivados.h"
#include "ArmasCombate.h"

void Barbaro :: autoHealing() {
    cout << nombre << " se cura 400 de vida!" << endl;
    vida += 400;
}

void Barbaro :: recargaEnergia(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())){
        int nueva_furia = casteada->getFuria() * recuperacion;
        casteada->recargarFuria(nueva_furia);
    }
    else cout << "El arma debe ser de combate" << endl;
}
    
int Barbaro :: superAttack(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())){
        int h = casteada->habilidad();
        int d = casteada->definitiva();
        return h + d;
    }
    else {
        cout << "El arma debe ser de combate" << endl;
        return 0;
    }
}

void Barbaro :: increaseDefense() {
    cout << nombre << " aumenta su defensa en 30!" << endl;
    armadura += 30;
    resistencia_magica += 30;
}

int Barbaro :: tanqueo(Armas& arma, int daño) {
    if (daño == 0) return 0;
    if (dynamic_cast<ArmasCombate*>(&arma)) daño -= armadura * 0.1;
    else daño -= resistencia_magica * 0.05;
    return daño;
}

void Paladin :: autoHealing() {
    cout << nombre << " se cura 350 de vida!" << endl;
    vida += 350;
}

void Paladin :: recargaEnergia(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())){
        int nueva_furia = casteada->getFuria() * recuperacion;
        casteada->recargarFuria(nueva_furia);
    }
    else cout << "El arma debe ser de combate" << endl;
}

int Paladin :: superAttack(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())){
        int h = casteada->habilidad();
        int d = casteada->definitiva();
        return h + d;
    }
    else {
        cout << "El arma debe ser de combate" << endl;
        return 0;
    }
}

void Paladin :: increaseDefense() {
    cout << nombre << " aumenta su armadura en 45 y su resistencia mágica en 50!" << endl;
    armadura += 45;
    resistencia_magica += 50;
}

int Paladin :: tanqueo(Armas& arma, int daño) {
    if (daño == 0) return 0;
    if (dynamic_cast<ArmasCombate*>(&arma)) daño -= armadura * 0.1;
    else daño -= resistencia_magica * 0.05;
    return daño;
}

void Caballero :: autoHealing() {
    cout << nombre << " se cura cuidadosamente 300 de vida!" << endl;
    vida += 300;
}

void Caballero :: recargaEnergia(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())){
        int nueva_furia = casteada->getFuria() * recuperacion;
        casteada->recargarFuria(nueva_furia);
    }
    else cout << "El arma debe ser de combate" << endl;
}

int Caballero :: superAttack(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())){
        int h = casteada->habilidad();
        int d = casteada->definitiva();
        return h + d;
    }
    else {
        cout << "El arma debe ser de combate" << endl;
        return 0;
    }
}

void Caballero :: increaseDefense() {
    cout << nombre << " refuerza su defensa, ganando 40 de defensa física y 25 mágica!" << endl;
    armadura += 40;
    resistencia_magica += 25;
}

int Caballero :: tanqueo(Armas& arma, int daño) {
    if (daño == 0) return 0;
    if (dynamic_cast<ArmasCombate*>(&arma)) daño -= armadura * 0.1;
    else daño -= resistencia_magica * 0.05;
    return daño;
}

void Mercenario :: autoHealing() {
    cout << nombre << " se cura 280 de vida!" << endl;
    vida += 280;
}

void Mercenario :: recargaEnergia(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())){
        int nueva_furia = casteada->getFuria() * recuperacion;
        casteada->recargarFuria(nueva_furia);
    }
    else cout << "El arma debe ser de combate" << endl;
}

int Mercenario :: superAttack(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())){
        int h = casteada->habilidad();
        int d = casteada->definitiva();
        return h + d;
    }
    else {
        cout << "El arma debe ser de combate" << endl;
        return 0;
    }
}

void Mercenario :: increaseDefense() {
    cout << nombre << " gana 20 de armadura y 20 de resistencia mágica!" << endl;
    armadura += 20;
    resistencia_magica += 20;
}

int Mercenario :: tanqueo(Armas& arma, int daño) {
    if (daño == 0) return 0;
    if (dynamic_cast<ArmasCombate*>(&arma)) daño -= armadura * 0.1;
    else daño -= resistencia_magica * 0.05;
    return daño;
}

void Gladiador :: autoHealing() {
    cout << nombre << " se cura 350 de vida!" << endl;
    vida += 350;
}

void Gladiador :: recargaEnergia(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())){
        int nueva_furia = casteada->getFuria() * recuperacion;
        casteada->recargarFuria(nueva_furia);
    }
    else cout << "El arma debe ser de combate" << endl;
}

int Gladiador :: superAttack(unique_ptr<Armas>& arma) {
    if (ArmasCombate* casteada = dynamic_cast<ArmasCombate*>(arma.get())){
        int h = casteada->habilidad();
        int d = casteada->definitiva();
        return h + d;
    }
    else {
        cout << "El arma debe ser de combate" << endl;
        return 0;
    }
}

void Gladiador :: increaseDefense() {
    cout << nombre << " refuerza su armadura en 35 y su resistencia mágica en 30!" << endl;
    armadura += 35;
    resistencia_magica += 30;
}

int Gladiador :: tanqueo(Armas& arma, int daño) {
    if (daño == 0) return 0;
    if (dynamic_cast<ArmasCombate*>(&arma)) daño -= armadura * 0.1;
    else daño -= resistencia_magica * 0.05;
    return daño;
}