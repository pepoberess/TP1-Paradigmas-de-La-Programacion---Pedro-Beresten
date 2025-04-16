#include "PersonajesFactory.h"

unique_ptr<Armas> PersonajesFactory :: createGun(const string& arma){
    if (arma == "Espada") return make_unique<Espada>();
    else if (arma == "Lanza") return make_unique<Lanza>();
    else if (arma == "Garrote") return make_unique<Garrote>();
    else if (arma == "Hacha Simple") return make_unique<HachaSimple>();
    else if (arma == "Hacha Doble") return make_unique<HachaDoble>();

    else if (arma == "Baston") return make_unique<Baston>();
    else if (arma == "Libro de Hechizos") return make_unique<LibroHechizos>();
    else if (arma == "Pocion") return make_unique<Pocion>();
    else if (arma == "Amuleto") return make_unique<Amuleto>();

    throw invalid_argument("Arma inválida");
}

unique_ptr<Personajes> PersonajesFactory::createCharacter(const string& personaje, const string& arma, const string& arma2) {
    unique_ptr<Armas> gun = nullptr;
    unique_ptr<Armas> gun2 = nullptr;

    if (!arma.empty()) gun = createGun(arma);
    if (!arma2.empty()) gun2 = createGun(arma2);

    if (personaje == "Barbaro") return make_unique<Barbaro>(move(gun), move(gun2));
    else if (personaje == "Paladin") return make_unique<Paladin>(move(gun), move(gun2));
    else if (personaje == "Caballero") return make_unique<Caballero>(move(gun), move(gun2));
    else if (personaje == "Mercenario") return make_unique<Mercenario>(move(gun), move(gun2));
    else if (personaje == "Gladiador") return make_unique<Gladiador>(move(gun), move(gun2));

    else if (personaje == "Hechicero") return make_unique<Hechicero>(move(gun), move(gun2));
    else if (personaje == "Conjurador") return make_unique<Conjurador>(move(gun), move(gun2));
    else if (personaje == "Brujo") return make_unique<Brujo>(move(gun), move(gun2));
    else if (personaje == "Nigromante") return make_unique<Nigromante>(move(gun), move(gun2));
    
    throw invalid_argument("Personaje inválido");
}

unique_ptr<Personajes> PersonajesFactory :: createArmedCharacter(const string& personaje, const string& arma, const string& arma2){
    unique_ptr<Armas> gun = createGun(arma);
    if (arma2.empty()) {
        cout << "El personaje " << personaje << " tiene un arma: " << arma << endl;
        unique_ptr<Personajes> champ = createCharacter(personaje, arma);
        return champ;
    }
    else {
        cout << "El personaje " << personaje << " tiene dos armas: " << arma << " y " << arma2 << endl;
        unique_ptr<Armas> gun2 = createGun(arma2);
        unique_ptr<Personajes> champ = createCharacter(personaje, arma, arma2);
        return champ;
    }
}