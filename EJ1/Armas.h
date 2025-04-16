#pragma once

#include <iostream>

using namespace std;

class Armas {
public:
    virtual int autoAttack() = 0;
    virtual int habilidad() = 0;
    virtual int definitiva() = 0;
    virtual ~Armas() = default;
};