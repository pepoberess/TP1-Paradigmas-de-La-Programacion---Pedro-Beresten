#include "/home/pepoberes/TP1_SilvioPedroBeresten.zip/EJ2/PersonajesFactory.h"
#include <cstdlib>
#include <ctime>

int main() {
    PersonajesFactory fabricota;
    srand(time(0));

    vector<string> personajes = {"Barbaro", "Paladin", "Caballero", "Mercenario", "Gladiador", "Hechicero", "Conjurador", "Brujo", "Nigromante"};
    vector<string> armas = {"Hacha Simple", "Hacha Doble", "Espada", "Lanza", "Garrote", "Baston", "Libro de Hechizos", "Pocion", "Amuleto"};

    cout << "Elija el personaje con el cual luchar: " << endl;

    cout << "\nPERSONAJES DE COMBATE!!!" << endl;
    cout << "1. Barbaro" << endl;
    cout << "2. Paladín" << endl;
    cout << "3. Caballero" << endl;
    cout << "4. Mercenario" << endl;
    cout << "5. Gladiador" << endl;

    cout << "\nPERSONAJES MAGOS!!!" << endl;
    cout << "6. Hechicero" << endl;
    cout << "7. Conjurador" << endl;
    cout << "8. Brujo" << endl;
    cout << "9. Nigromante" << endl;

    int personaje_num_usuario;
    cin >> personaje_num_usuario;
    string personaje_usuario = personajes[personaje_num_usuario - 1];

    cout << "Elija el arma con la que quiere lastimar: " << endl;

    cout << "\nARMAS DE COMBATE!!!" << endl;
    cout << "1. Hacha Simple" << endl;
    cout << "2. Hacha Doble" << endl;
    cout << "3. Espada" << endl;
    cout << "4. Lanza" << endl;
    cout << "5. Garrote" << endl;

    cout << "\nARMAS MAGICAS!!!" << endl;
    cout << "6. Baston" << endl;
    cout << "7. Libro de Hechizos" << endl;
    cout << "8. Pocion" << endl;
    cout << "9. Amuleto" << endl;

    int arma_num_usuario;
    cin >> arma_num_usuario;
    string arma_usuario = armas[arma_num_usuario - 1];

    unique_ptr<Armas> arma1 = fabricota.createGun(arma_usuario);
    unique_ptr<Personajes> champ_usuario = fabricota.createArmedCharacter(personaje_usuario, arma_usuario);

    string personaje_maquina = personajes[rand() % 9];
    string arma_maquina = armas[rand() % 9];

    unique_ptr<Armas> arma2 = fabricota.createGun(arma_maquina);
    unique_ptr<Personajes> champ_maquina = fabricota.createArmedCharacter(personaje_maquina, arma_maquina);

    while(champ_usuario->getVida() > 0 && champ_maquina->getVida() > 0) {
        cout << "desea salir: si/no" << endl;
        string salir;
        cin >> salir;
        if (salir == "si") break;
        
        vector <string> elecciones = {"Golpe Fuerte", "Golpe Rápido", "Defensa y Golpe"};
        int eleccion;
        cout << "Ingrese su elección de ataque: 1. Golpe Fuerte | 2. Golpe Rápido | 3. Defensa y Golpe" << endl;
        cin >> eleccion;
        if (eleccion < 1 || eleccion > 3) {
            cout << "Opción inválida. Elegí entre 1 y 3." << endl;
            continue;
        }

        string eleccion_maquina = elecciones[rand() % 3];

        vector <string> ataques = {"autoAttack",
                                    "habilidad", "habilidad", "habilidad",
                                    "definitiva", "definitiva", "definitiva",
                                    "superAttack"};

        string ataque = ataques[rand() % 8];

        int damage = 0;
        int damage2 = 0;

        cout << "El " << champ_usuario->getNombre() << " tiene " << champ_usuario->getVida() << " de vida y el " 
             << champ_maquina->getNombre() << " tiene " << champ_maquina->getVida() << " de vida" << endl;

        cout << "El " << champ_usuario->getNombre() << " eligió " << elecciones[eleccion - 1] << " y " 
             << champ_maquina->getNombre() << " eligió " << eleccion_maquina << endl;

        if (elecciones[eleccion - 1] == eleccion_maquina) {
            cout << "Empate!" << endl;
        }

        else if ((elecciones[eleccion - 1] == "Golpe Fuerte" && eleccion_maquina == "Golpe Rápido") ||
                (elecciones[eleccion - 1] == "Golpe Rápido" && eleccion_maquina == "Defensa y Golpe") ||
                (elecciones[eleccion - 1] == "Defensa y Golpe" && eleccion_maquina == "Golpe Fuerte")) {
            if(ataque == "autoAttack") {
                damage = arma1->autoAttack();
                damage2 = arma2->autoAttack();
            } 
            else if (ataque == "habilidad") {
                damage = arma1->habilidad();
                damage2 = arma2->habilidad();
            } 
            else if (ataque == "definitiva") {
                damage = arma1->definitiva();
                damage2 = arma2->definitiva();
            }
            else {
                damage = champ_usuario->superAttack(arma1);
                damage2 = champ_maquina->superAttack(arma2);
            }
            cout << "El " << champ_usuario->getNombre() << " ataca a " << champ_maquina->getNombre() << " con " << damage << endl;
            int final_damage = champ_maquina->tanqueo(*arma1, damage);
            champ_maquina->lifeLoss(final_damage);
            champ_usuario->recargaEnergia(arma1);
        } 
        else {
            if(ataque == "autoAttack") {
                damage = arma1->autoAttack();
                damage2 = arma2->autoAttack();
            } 
            else if (ataque == "habilidad") {
                damage = arma1->habilidad();
                damage2 = arma2->habilidad();
            } 
            else if (ataque == "definitiva") {
                damage = arma1->definitiva();
                damage2 = arma2->definitiva();
            }
            else {
                damage = champ_usuario->superAttack(arma1);
                damage2 = champ_maquina->superAttack(arma2);
            }
            cout << "El " << champ_maquina->getNombre() << " ataca a " << champ_usuario->getNombre() << " con " << damage2 << endl;
            int final_damage = champ_usuario->tanqueo(*arma2, damage2);
            champ_usuario->lifeLoss(final_damage);
            champ_maquina->recargaEnergia(arma2);
        }
        
    }
    
    if (champ_usuario->getVida() > 0) cout << "El " << champ_usuario->getNombre() << " ganó la pelea" << endl;
    else cout << "El " << champ_maquina->getNombre() << " ganó la pelea" << endl;

    return 0;
}