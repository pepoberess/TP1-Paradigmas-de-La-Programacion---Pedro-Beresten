#include "/home/pepoberes/TP1_SilvioPedroBeresten.zip/EJ1/Armas.h"
#include "/home/pepoberes/TP1_SilvioPedroBeresten.zip/EJ1/Personajes.h"
#include "/home/pepoberes/TP1_SilvioPedroBeresten.zip/EJ1/ArmasCombateDerivadas.h"
#include "/home/pepoberes/TP1_SilvioPedroBeresten.zip/EJ1/ArmasMagicasDerivadas.h"
#include "/home/pepoberes/TP1_SilvioPedroBeresten.zip/EJ1/GuerrerosDerivados.h"
#include "/home/pepoberes/TP1_SilvioPedroBeresten.zip/EJ1/MagosDerivados.h"
#include <vector>
#include <iostream>

class PersonajesFactory {
public:
    static unique_ptr<Armas> createGun(const string& arma);
    static unique_ptr<Personajes> createCharacter(const string& personaje, const string& arma = "", const string& arma2 = "");
    static unique_ptr<Personajes> createArmedCharacter(const string& personaje, const string& arma, const string& arma2 = "");
};