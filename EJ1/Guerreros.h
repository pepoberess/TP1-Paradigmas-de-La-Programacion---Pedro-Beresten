#pragma once

#include "Personajes.h"
#include "ArmasCombate.h"

class Guerreros : public Personajes {
protected:
    string nombre;
    int vida;
    int armadura;
    int resistencia_magica;
    int recuperacion;
    unique_ptr<Armas> arma;
    unique_ptr<Armas> arma2;
public:
    Guerreros(const string& nombre, int vida, int armadura, int resistencia_magica, int recuperacion)
        : nombre(nombre), vida(vida), armadura(armadura), resistencia_magica(resistencia_magica), recuperacion(recuperacion) {}
    Guerreros(const string& nombre, int vida, int armadura, int resistencia_magica, int recuperacion, unique_ptr<Armas> arma)
        : nombre(nombre), vida(vida), armadura(armadura), resistencia_magica(resistencia_magica), recuperacion(recuperacion), arma(move(arma)) {}
    Guerreros(const string& nombre, int vida, int armadura, int resistencia_magica, int recuperacion, unique_ptr<Armas> arma, unique_ptr<Armas> arma2)
        : nombre(nombre), vida(vida), armadura(armadura), resistencia_magica(resistencia_magica), recuperacion(recuperacion), arma(move(arma)), arma2(move(arma2)) {}

    virtual string getNombre() const override;
    virtual int getVida() const override;
    virtual int getArmadura() const override;
    virtual int getResistenciaMagica() const override;
    virtual int getRecuperacion() const override;
    virtual void lifeLoss(int daño) override;
    virtual void mejorarAC(unique_ptr<Armas>& arma);
    virtual void autoHealing() = 0; 
    virtual void recargaEnergia(unique_ptr<Armas>& arma) = 0;
    virtual int superAttack(unique_ptr<Armas>& arma) = 0;
    virtual void increaseDefense() = 0;
    virtual int tanqueo(Armas& arma, int daño) = 0;
    virtual ~Guerreros() = default;
};