#pragma once

#include "Armas.h"
#include <iostream>
#include <memory>

using namespace std;

class Personajes {
public:
    virtual string getNombre() const = 0;
    virtual int getVida() const = 0;
    virtual int getArmadura() const = 0;
    virtual int getResistenciaMagica() const = 0;
    virtual int getRecuperacion() const = 0;
    virtual void autoHealing() = 0;
    virtual void recargaEnergia(unique_ptr<Armas>& arma) = 0;
    virtual int superAttack(unique_ptr<Armas>& arma) = 0;
    virtual void increaseDefense() = 0;
    virtual int tanqueo(Armas& arma, int daño) = 0;
    virtual void lifeLoss(int daño) = 0;
    virtual ~Personajes() = default;
};