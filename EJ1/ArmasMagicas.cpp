#include "ArmasMagicas.h"

int ArmasMagicas :: getAP() const {return ap;}

int ArmasMagicas :: getAlcance() const {return alcance;}

int ArmasMagicas :: getNivel() const {return nivel;}

int ArmasMagicas :: getDesgaste() const {return desgaste;}

int ArmasMagicas :: getMana() const {return mana;}

int ArmasMagicas :: getManaMax() const {return mana_max;}

string ArmasMagicas :: getNombre() const {return nombre;}

void ArmasMagicas ::  subirNivel() {
    if (nivel > 0 && nivel <= 10) {
        nivel ++;
        ap += nivel * 2;
        alcance += nivel * 1.2;
        desgaste -= nivel * 0.5;
        mana_max += nivel * 5;
    } 
    else {
        cout << "el" << nombre << "ya está al máximo nivel" << endl;
    }

}

void ArmasMagicas ::  subirDesgaste() {desgaste ++;}

void ArmasMagicas ::  recargarMana(int suma_mana) {mana += suma_mana;}

