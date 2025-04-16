#pragma once

#include "Guerreros.h"

class Barbaro : public Guerreros {
public:
    Barbaro(unique_ptr<Armas> arma = nullptr, unique_ptr<Armas> arma2 = nullptr) 
    : Guerreros("Bárbaro", 500, 60, 30, 1.4, move(arma), move(arma2)) {}

    void autoHealing() override;
    void recargaEnergia(unique_ptr<Armas>& arma) override;
    int superAttack(unique_ptr<Armas>& arma) override;
    void increaseDefense() override;
    int tanqueo(Armas& arma, int daño) override;
};

class Paladin : public Guerreros {
public:
    Paladin(unique_ptr<Armas> arma = nullptr, unique_ptr<Armas> arma2 = nullptr) 
    : Guerreros("Paladín", 650, 90, 80, 1.2, move(arma), move(arma2)) {}

    void autoHealing() override;
    void recargaEnergia(unique_ptr<Armas>& arma) override;
    int superAttack(unique_ptr<Armas>& arma) override;
    void increaseDefense() override;
    int tanqueo(Armas& arma, int daño) override;
};

class Caballero : public Guerreros {
public:
    Caballero(unique_ptr<Armas> arma = nullptr, unique_ptr<Armas> arma2 = nullptr) 
    : Guerreros("Caballero", 550, 85, 60, 1.3, move(arma), move(arma2)) {}

    void autoHealing() override;
    void recargaEnergia(unique_ptr<Armas>& arma) override;
    int superAttack(unique_ptr<Armas>& arma) override;
    void increaseDefense() override;
    int tanqueo(Armas& arma, int daño) override;
};

class Mercenario : public Guerreros {
public:
    Mercenario(unique_ptr<Armas> arma = nullptr, unique_ptr<Armas> arma2 = nullptr) 
    : Guerreros("Mercenario", 450, 70, 50, 1.7, move(arma), move(arma2)) {}

    void autoHealing() override;
    void recargaEnergia(unique_ptr<Armas>& arma) override;
    int superAttack(unique_ptr<Armas>& arma) override;
    void increaseDefense() override;
    int tanqueo(Armas& arma, int daño) override;
};

class Gladiador : public Guerreros {
public:
    Gladiador(unique_ptr<Armas> arma = nullptr, unique_ptr<Armas> arma2 = nullptr) 
    : Guerreros("Gladiador", 560, 75, 40, 1.5, move(arma), move(arma2)) {}

    void autoHealing() override;
    void recargaEnergia(unique_ptr<Armas>& arma) override;
    int superAttack(unique_ptr<Armas>& arma) override;
    void increaseDefense() override;
    int tanqueo(Armas& arma, int daño) override;
};