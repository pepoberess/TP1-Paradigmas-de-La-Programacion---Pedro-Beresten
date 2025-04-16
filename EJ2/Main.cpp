#include "PersonajesFactory.h"
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    PersonajesFactory fabricota;
    srand(time(0));

    int cantidad_magos = 3 + rand() % 5;
    cout << "La cantidad de personajes tipo mago es: " << cantidad_magos << endl;
    int cantidad_guerreros = 3 + rand() % 5;
    cout << "La cantidad de personajes tipo guerrero es: " << cantidad_guerreros << endl;
    
    for (int i = 0; i < cantidad_magos; i++){
        int armas_magos = rand() % 3;
        cout << "El número de armas para el mago numero " << i << " es: " << armas_magos << endl;
        if(armas_magos == 0)
            fabricota.createCharacter("Hechicero");
        else if(armas_magos == 1)
            fabricota.createArmedCharacter("Hechicero", "Libro de Hechizos");
        else
            fabricota.createArmedCharacter("Hechicero", "Baston", "Libro de Hechizos");
    }
    for (int i = 0; i < cantidad_guerreros; i++){
        int armas_guerreros = rand() % 3;
        cout << "El número de armas para el guerrero numero " << i << " es: " << armas_guerreros << endl;
        if(armas_guerreros == 0)
            fabricota.createCharacter("Gladiador");
        else if(armas_guerreros == 1)
            fabricota.createArmedCharacter("Gladiador", "Lanza");
        else
            fabricota.createArmedCharacter("Gladiador", "Lanza", "Garrote");
    }
    return 0;
}