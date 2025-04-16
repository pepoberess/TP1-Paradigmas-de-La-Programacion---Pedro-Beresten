#include "ArmasCombate.h"

int ArmasCombate :: getAD() const {return ad;}

int ArmasCombate :: getAlcance() const {return alcance;}

int ArmasCombate :: getNivel() const {return nivel;}

int ArmasCombate :: getDesgaste() const {return desgaste;}

int ArmasCombate :: getFuria() const {return furia;}

string ArmasCombate :: getNombre() const {return nombre;}

void ArmasCombate ::  subirNivel() {
    if (nivel > 0 && nivel <= 10) {
        nivel ++;
        ad += nivel * 2;
        alcance += nivel * 1.2;
        desgaste -= nivel * 0.5;
        furia += nivel * 5;
    } 
    else {
        cout << "el" << nombre << "ya está al máximo nivel" << endl;
    }

}

void ArmasCombate ::  subirDesgaste() {desgaste ++;}

void ArmasCombate ::  recargarFuria(int suma_furia) {
    if (furia < 100 - suma_furia) furia += suma_furia; 

    else cout << "El " << nombre << " ya está al máximo de furia" << endl;
}

