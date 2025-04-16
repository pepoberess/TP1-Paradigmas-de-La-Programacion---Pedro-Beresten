#pragma once

#include "ArmasCombate.h"

class HachaSimple : public ArmasCombate {
public:
    HachaSimple() : ArmasCombate("Hacha Simple", "Tomahawk", "Blood Eagle", 25, 1, 10, 0, 1) {}

    int autoAttack() override;
    int habilidad() override;
    int definitiva() override;
};

class HachaDoble : public ArmasCombate {
public:
    HachaDoble() : ArmasCombate("Hacha Doble", "Double Tomahawk", "Torbellino leñador", 40, 1, 20, 0, 1) {}

    int autoAttack() override;
    int habilidad() override;
    int definitiva() override;
};

class Espada : public ArmasCombate {
public:
    Espada() : ArmasCombate("Espada", "Pinchazo doble", "Corte Majestuoso", 30, 2, 15, 0, 1) {}

    int autoAttack() override;
    int habilidad() override;
    int definitiva() override;
};

class Lanza : public ArmasCombate {
public:
    Lanza() : ArmasCombate("Lanza", "Dardos", "Long Range Shot", 28, 5, 25, 0, 1) {}

    int autoAttack() override;
    int habilidad() override;
    int definitiva() override;
};

class Garrote : public ArmasCombate {
    public:
        Garrote() : ArmasCombate("Garrote", "Golpe Giratorio", "Mazotazo Head Shot", 35, 3, 50, 0, 1) {}
    
        int autoAttack() override;
        int habilidad() override;
        int definitiva() override;
    };
    