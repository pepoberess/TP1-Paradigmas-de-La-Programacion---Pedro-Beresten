#include "ArmasMagicasDerivadas.h"

int Baston :: autoAttack() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que lanza un golpe de energía mágica con el bastón!" << endl;
        cout << "Su daño es de: " << ap << " de vida" << endl;
        cout << "Su alcance es de: " << alcance << " metros" << endl;
    }
    return ap;
}

int Baston :: habilidad() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (mana < 50) {
        cout << "No tienes suficiente maná para usar la habilidad" << endl;
        return 0;
    }
    if (desgaste > 90) {
        cout << "No puedes usar la habilidad, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que usa su habilidad: " << hability << endl;
        cout << "Quita: " << 2.5 * ap << " de vida" << endl;
        cout << "Su alcance es: " << 2 * alcance << " metros" << endl;
        mana -= 50;
        desgaste += 8;
    }
    return 2.5 * ap;
}

int Baston :: definitiva() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (mana < 200) {
        cout << "No tienes suficiente maná para usar la definitiva" << endl;
        return 0;
    }
    if (desgaste > 85) {
        cout << "No puedes usar la definitiva, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que desata su ulti: " << ulti << endl;
        cout << "Quita: " << 6 * ap << " de vida" << endl;
        cout << "Su alcance es: " << 3 * alcance << " metros" << endl;
        mana -= 200;
        desgaste += 12;
    }
    return 6 * ap;
}

int LibroHechizos :: autoAttack() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que lanza un hechizo básico desde su libro!" << endl;
        cout << "Su daño es de: " << ap << " de vida" << endl;
        cout << "Su alcance es de: " << alcance << " metros" << endl;
    }
    return ap;
}

int LibroHechizos :: habilidad() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (mana < 40) {
        cout << "No tienes suficiente maná para usar la habilidad" << endl;
        return 0;
    }
    if (desgaste > 88) {
        cout << "No puedes usar la habilidad, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que usa su habilidad: " << hability << endl;
        cout << "Quita: " << 2 * ap << " de vida" << endl;
        cout << "Su alcance es: " << 2.5 * alcance << " metros" << endl;
        mana -= 40;
        desgaste += 6;
    }
    return 2 * ap;
}

int LibroHechizos :: definitiva() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (mana < 150) {
        cout << "No tienes suficiente maná para usar la definitiva" << endl;
        return 0;
    }
    if (desgaste > 82) {
        cout << "No puedes usar la definitiva, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que desata su ulti: " << ulti << endl;
        cout << "Quita: " << 5 * ap << " de vida" << endl;
        cout << "Su alcance es: " << 3 * alcance << " metros" << endl;
        mana -= 150;
        desgaste += 10;
    }
    return 5 * ap;
}

int Pocion :: autoAttack() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que lanza una poción corrosiva!" << endl;
        cout << "Su daño es de: " << ap << " de vida" << endl;
        cout << "Su alcance es de: " << alcance << " metros" << endl;
    }
    return ap;
}

int Pocion :: habilidad() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (mana < 45) {
        cout << "No tienes suficiente maná para usar la habilidad" << endl;
        return 0;
    }
    if (desgaste > 87) {
        cout << "No puedes usar la habilidad, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que usa su habilidad: " << hability << endl;
        cout << "Quita: " << 2.3 * ap << " de vida" << endl;
        cout << "Su alcance es: " << 2 * alcance << " metros" << endl;
        mana -= 45;
        desgaste += 7;
    }
    return 2.3 * ap;
}

int Pocion :: definitiva() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (mana < 180) {
        cout << "No tienes suficiente maná para usar la definitiva" << endl;
        return 0;
    }
    if (desgaste > 83) {
        cout << "No puedes usar la definitiva, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que desata su ulti: " << ulti << endl;
        cout << "Quita: " << 5.5 * ap << " de vida" << endl;
        cout << "Su alcance es: " << 3 * alcance << " metros" << endl;
        mana -= 180;
        desgaste += 11;
    }
    return 5.5 * ap;
}

int Amuleto :: autoAttack() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que libera una onda maldita!" << endl;
        cout << "Su daño es de: " << ap << " de vida" << endl;
        cout << "Su alcance es de: " << alcance << " metros" << endl;
    }
    return ap;
}

int Amuleto :: habilidad() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (mana < 35) {
        cout << "No tienes suficiente maná para usar la habilidad" << endl;
        return 0;
    }
    if (desgaste > 89) {
        cout << "No puedes usar la habilidad, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que usa su habilidad: " << hability << endl;
        cout << "Quita: " << 2.2 * ap << " de vida" << endl;
        cout << "Su alcance es: " << 2 * alcance << " metros" << endl;
        mana -= 35;
        desgaste += 6;
    }
    return 2.2 * ap;
}

int Amuleto :: definitiva() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (mana < 140) {
        cout << "No tienes suficiente maná para usar la definitiva" << endl;
        return 0;
    }
    if (desgaste > 80) {
        cout << "No puedes usar la definitiva, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que invoca su ritual definitivo: " << ulti << endl;
        cout << "Quita: " << 5 * ap << " de vida" << endl;
        cout << "Su alcance es: " << 2.8 * alcance << " metros" << endl;
        mana -= 140;
        desgaste += 9;
    }
    return 5 * ap;
}
