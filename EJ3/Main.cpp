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
    cout << "2. Palaín" << endl;
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
    cout << "El usuario peleará con el " << personaje_usuario << " el cual porta el arma: " << arma_usuario << endl;

    string personaje_maquina = personajes[rand() % 9];
    string arma_maquina = personajes[rand() % 9];

    unique_ptr<Armas> arma2 = fabricota.createGun(arma_maquina);
    unique_ptr<Personajes> champ_maquina = fabricota.createArmedCharacter(personaje_maquina, arma_maquina);

    while(champ_usuario->getVida() >= 0 || champ_maquina->getVida() >= 0) {
        vector <string> elecciones = {"Golpe Fuerte", "Golpe Rápido", "Defensa y Golpe"};
        string eleccion;
        cout << "Ingrese su elección de ataque: Golpe Fuerte | Golpe Rápido | Defensa y Golpe" << endl;
        cin >> eleccion;

        string eleccion_maquina = elecciones[rand() % 3];

        vector <string> ataques = {"autoAttack", "autoAttack", "autoAttack", "autoAttack", "autoAttack", "autoAttack",
                                    "habilidad", "habilidad", "habilidad" 
                                    "definitiva", "definitiva",
                                    "superAttack"};

        string ataque_usuario = ataques[rand() % 7];
        string ataque_maquina = ataques[rand() % 7];

        int damage = 0;
        int damage2 = 0;

        if(ataque_usuario == "autoAttack") {
            int damage = arma1->autoAttack();
            int damage2 = arma2->autoAttack();
        } 
        else if (ataque_usuario == "habilidad") {
            int damage = arma1->habilidad();
            int damage2 = arma2->habilidad();
        } 
        else if (ataque_usuario == "definitiva") {
            int damage = arma1->definitiva();
            int damage2 = arma2->definitiva();
        }
        else {
            int damage = champ_usuario->superAttack(arma1);
            int damage2 = champ_maquina->superAttack(arma2);
        }
        cout << "El " << champ_usuario->getNombre() << "tiene " << champ_usuario->getVida() << "y " 
             << champ_maquina->getNombre() << "tiene " << champ_maquina->getVida() << endl;

        cout << "El " << champ_usuario->getNombre() << "eligió el " << eleccion << "y " 
             << champ_maquina->getNombre() << "eligió el " << eleccion_maquina << endl;

        if (eleccion == eleccion_maquina) {
            cout << "Empate!" << endl;
        } 
        else if ((eleccion == "Golpe Fuerte" && eleccion_maquina == "Golpe Rápido") ||
                (eleccion == "Golpe Rápido" && eleccion_maquina == "Defensa y Golpe") ||
                (eleccion == "Defensa y Golpe" && eleccion_maquina == "Golpe Fuerte")) {
            cout << "El " << champ_usuario->getNombre() << "ataca a " << champ_maquina->getNombre() << "con " << damage << endl;
            int final_damage = champ_maquina->tanqueo(*arma1, damage);
            champ_maquina->lifeLoss(final_damage);
            champ_usuario->recargaEnergia(arma1);
        } 
        else {
            cout << "El " << champ_maquina->getNombre() << "ataca a " << champ_usuario->getNombre() << "con " << damage2 << endl;
            int final_damage = champ_usuario->tanqueo(*arma2, damage2);
            champ_usuario->lifeLoss(final_damage);
            champ_maquina->recargaEnergia(arma2);
        }
        
    }

    return 0;
}