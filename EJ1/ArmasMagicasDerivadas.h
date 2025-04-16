#pragma once

#include "ArmasMagicas.h"

class Baston : public ArmasMagicas {
public:
    Baston() : ArmasMagicas("Bastón", "Roshi Attack", "Kamehameha", 20, 8, 0, 1, 750, 750) {}

    int autoAttack() override;
    int habilidad() override;
    int definitiva() override;
};

class LibroHechizos : public ArmasMagicas {
public:
    LibroHechizos() : ArmasMagicas("Libro de Hechizos", "Enchantment", "Exorcismo", 18, 5, 0, 1, 400, 400) {}

    int autoAttack() override;
    int habilidad() override;
    int definitiva() override;
};

class Pocion : public ArmasMagicas {
public:
    Pocion() : ArmasMagicas("Poción", "La poisson", "Supreme poisson", 15, 3, 0, 1, 500, 500) {}

    int autoAttack() override;
    int habilidad() override;
    int definitiva() override;
};

class Amuleto : public ArmasMagicas {
public:
    Amuleto() : ArmasMagicas("Amuleto", "Bad luck", "Ultimate ritual", 22, 2, 0, 1, 350, 350) {}
    
    int autoAttack() override;
    int habilidad() override;
    int definitiva() override;
};
