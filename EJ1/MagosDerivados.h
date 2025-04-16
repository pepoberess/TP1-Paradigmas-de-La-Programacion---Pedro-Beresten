#include "Magos.h"

class Hechicero : public Magos {
public:
    Hechicero(unique_ptr<Armas> arma = nullptr, unique_ptr<Armas> arma2 = nullptr) 
    : Magos("Hechicero", 1200, 80, 200, 1.6, move(arma), move(arma2)) {}

    void autoHealing() override;
    void recargaEnergia(unique_ptr<Armas>& arma) override;
    int superAttack(unique_ptr<Armas>& arma) override;
    void increaseDefense() override;
    int tanqueo(Armas& arma, int daño) override;
};

class Conjurador : public Magos {
public:
    Conjurador(unique_ptr<Armas> arma = nullptr, unique_ptr<Armas> arma2 = nullptr) 
    : Magos("Conjurador", 1300, 90, 180, 1.7, move(arma), move(arma2)) {}  

    void autoHealing() override;
    void recargaEnergia(unique_ptr<Armas>& arma) override;
    int superAttack(unique_ptr<Armas>& arma) override;
    void increaseDefense() override;
    int tanqueo(Armas& arma, int daño) override;
};

class Brujo : public Magos {
public:
    Brujo(unique_ptr<Armas> arma = nullptr, unique_ptr<Armas> arma2 = nullptr) 
    : Magos("Brujo", 1250, 70, 210, 1.65, move(arma), move(arma2)) {}  

    void autoHealing() override;
    void recargaEnergia(unique_ptr<Armas>& arma) override;
    int superAttack(unique_ptr<Armas>& arma) override;
    void increaseDefense() override;
    int tanqueo(Armas& arma, int daño) override;
};

class Nigromante : public Magos {
public:
Nigromante(unique_ptr<Armas> arma = nullptr, unique_ptr<Armas> arma2 = nullptr)
: Magos("Nigromante", 1150, 85, 220, 1.8, move(arma), move(arma2)) {} 

    void autoHealing() override;
    void recargaEnergia(unique_ptr<Armas>& arma) override;
    int superAttack(unique_ptr<Armas>& arma) override;
    void increaseDefense() override;
    int tanqueo(Armas& arma, int daño) override;
};