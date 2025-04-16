#pragma once

#include "Armas.h"

class ArmasMagicas : public Armas {
protected:
    string nombre;
    string hability;
    string ulti;
    int ap;
    int alcance;
    int desgaste;
    int nivel;
    int mana;
    int mana_max;
public:
    ArmasMagicas(const string& nombre, const string& hability, const string& ulti, int ap, int alcance, int desgaste, int nivel, int mana, int mana_max)
        : nombre(nombre), hability(hability), ulti(ulti), ap(ap), alcance(alcance), desgaste(desgaste), nivel(nivel), mana(mana) {}
    virtual int getAP() const;
    virtual int getAlcance() const;
    virtual int getNivel() const;
    virtual int getDesgaste() const;
    virtual int getMana() const;
    virtual int getManaMax() const;
    virtual string getNombre() const;
    virtual void subirNivel();
    virtual void subirDesgaste();
    virtual void recargarMana(int mana);
    virtual int autoAttack() = 0;
    virtual int habilidad() = 0;
    virtual int definitiva() = 0;
    virtual ~ArmasMagicas() = default;
};
