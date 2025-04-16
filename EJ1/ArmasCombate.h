#pragma once

#include "Armas.h"

class ArmasCombate : public Armas {
protected:
    string nombre;
    string hability;
    string ulti;
    int ad;
    int alcance;
    int furia;
    int desgaste;
    int nivel;
public:
    ArmasCombate(const string& nombre, const string& hability, const string& ulti, int ad, int alcance, int furia, int desgaste, int nivel)
        : nombre(nombre), hability(hability), ulti(ulti), ad(ad), alcance(alcance), furia(furia), desgaste(desgaste), nivel(nivel) {}
    virtual int getAD() const;
    virtual int getAlcance() const;
    virtual int getNivel() const;
    virtual int getDesgaste() const;
    virtual int getFuria() const;
    virtual string getNombre() const;
    virtual void subirNivel();
    virtual void subirDesgaste();
    virtual void recargarFuria(int suma_furia);
    virtual int autoAttack() = 0;
    virtual int habilidad() = 0;
    virtual int definitiva() = 0;
    virtual ~ArmasCombate() = default;
};