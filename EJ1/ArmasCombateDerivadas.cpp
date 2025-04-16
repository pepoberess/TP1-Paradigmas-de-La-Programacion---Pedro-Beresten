#include "ArmasCombateDerivadas.h"

int HachaSimple :: autoAttack() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que ataca con un corte desgarrador!" << endl;
        cout << "Su daño es de: " << ad << " de vida" << endl;
        cout << "Su alcance es de: " << alcance << " metros" << endl;
    }
    return ad;
}

int HachaSimple :: habilidad() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (furia < 10) {
        cout << "No tienes suficiente furia para usar la habilidad" << endl;
        return 0;
    }
    if (desgaste > 90) {
        cout << "No puedes usar la habilidad, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que usa su habilidad: " << hability << endl;
        cout << "Quita: " << 3 * ad << " de vida" << endl;
        cout << "Su alcance es: " << 10 * alcance << " metros" << endl;
        furia -= 10;
        desgaste += 5;
    }
    return 3 * ad;
}

int HachaSimple ::  definitiva() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (furia < 35) {
        cout << "No tienes suficiente furia para usar la definitiva" << endl;
        return 0;
    }
    if (desgaste > 85) {
        cout << "No puedes usar la definitiva, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que desata su ulti: " << ulti << endl;
        cout << "Quita: " << 10 * ad << " de vida" << endl;
        cout << "Su alcance es: " << alcance << " metros" << endl;
        furia -= 35;
        desgaste += 10;
    }
    return 10 * ad;
}

int HachaDoble :: autoAttack() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que ataca con un doble hachazo!" << endl;
        cout << "Su daño es de: " << ad << " de vida" << endl;
        cout << "Su alcance es de: " << alcance << " metros" << endl;
    }
    return ad;
}

int HachaDoble :: habilidad() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (furia < 15) {
        cout << "No tienes suficiente furia para usar la habilidad" << endl;
        return 0;
    }
    if (desgaste > 85) {
        cout << "No puedes usar la habilidad, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que usa su habilidad: " << hability << endl;
        cout << "Quita: " << 3.5 * ad << " de vida" << endl;
        cout << "Su alcance es: " << 10 * alcance << " metros" << endl;
        furia -= 15;
        desgaste += 7;
    }
    return 3.5 * ad;
}

int HachaDoble :: definitiva() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (furia < 45) {
        cout << "No tienes suficiente furia para usar la definitiva" << endl;
        return 0;
    }
    if (desgaste > 80) {
        cout << "No puedes usar la definitiva, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que desata su ulti: " << ulti << endl;
        cout << "Quita: " << 11 * ad << " de vida" << endl;
        cout << "Su alcance es: " << 2 * alcance << " metros" << endl;
        furia -= 45;
        desgaste += 12;
    }
    return 11 * ad;
}

int Espada :: autoAttack() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que corta rápidamente!" << endl;
        cout << "Su daño es de: " << ad << " de vida" << endl;
        cout << "Su alcance es de: " << alcance << " metros" << endl;
    }
    return ad;
}

int Espada :: habilidad() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (furia < 12) {
        cout << "No tienes suficiente furia para usar la habilidad" << endl;
        return 0;
    }
    if (desgaste > 92) {
        cout << "No puedes usar la habilidad, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que usa su habilidad: " << hability << endl;
        cout << "Quita: " << 2.8 * ad << " de vida" << endl;
        cout << "Su alcance es: " << 1.8 * alcance << " metros" << endl;
        furia -= 12;
        desgaste += 4;
    }
    return 2.8 * ad;
}

int Espada :: definitiva() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (furia < 38) {
        cout << "No tienes suficiente furia para usar la definitiva" << endl;
        return 0;
    }
    if (desgaste > 88) {
        cout << "No puedes usar la definitiva, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que desata su ulti: " << ulti << endl;
        cout << "Quita: " << 12 * ad << " de vida" << endl;
        cout << "Su alcance es: " << 3.5 * alcance << " metros" << endl;
        furia -= 38;
        desgaste += 9;
    }
    return 12 * ad;
}

int Lanza :: autoAttack() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que hace un doble golpe!" << endl;
        cout << "Su daño es de: " << ad << " de vida" << endl;
        cout << "Su alcance es de: " << alcance << " metros" << endl;
    }
    return ad;
}

int Lanza :: habilidad() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (furia < 25) {
        cout << "No tienes suficiente furia para usar la habilidad" << endl;
        return 0;
    }
    if (desgaste > 88) {
        cout << "No puedes usar la habilidad, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que usa su habilidad: " << hability << endl;
        cout << "Quita: " << 3.2 * ad << " de vida" << endl;
        cout << "Su alcance es: " << 2 * alcance << " metros" << endl;
        furia -= 25;
        desgaste += 6;
    }
    return 3.2 * ad;
}

int Lanza :: definitiva() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (furia < 50) {
        cout << "No tienes suficiente furia para usar la definitiva" << endl;
        return 0;
    }
    if (desgaste > 85) {
        cout << "No puedes usar la definitiva, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que desata su ulti: " << ulti << endl;
        cout << "Quita: " << 11 * ad << " de vida" << endl;
        cout << "Su alcance es: " << 4.5 * alcance << " metros" << endl;
        furia -= 50;
        desgaste += 11;
    }
    return 11 * ad;
}

int Garrote :: autoAttack() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que pega un garrotazo!" << endl;
        cout << "Su daño es de: " << ad << " de vida" << endl;
        cout << "Su alcance es de: " << alcance << " metros" << endl;
    }
    return ad;
}

int Garrote :: habilidad() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (furia < 30) {
        cout << "No tienes suficiente furia para usar la habilidad" << endl;
        return 0;
    }
    if (desgaste > 86) {
        cout << "No puedes usar la habilidad, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que usa su habilidad: " << hability << endl;
        cout << "Quita: " << 3.2 * ad << " de vida" << endl;
        cout << "Su alcance es: " << 2 * alcance << " metros" << endl;
        furia -= 25;
        desgaste += 7;
    }
    
    return 3.2 * ad;
}

int Garrote :: definitiva() {
    static int contador_llamadas = 0;
    contador_llamadas++;

    if (furia < 100) {
        cout << "No tienes suficiente furia para usar la definitiva" << endl;
        return 0;
    }
    if (desgaste > 85) {
        cout << "No puedes usar la definitiva, el desgaste es muy alto" << endl;
        return 0;
    }
    if (contador_llamadas % 2 == 0) {
        cout << nombre << " que desata su ulti: " << ulti << endl;
        cout << "Quita: " << 14 * ad << " de vida" << endl;
        cout << "Su alcance es: " << 2 * alcance << " metros" << endl;
        furia -= 100;
        desgaste += 15;
    }
    return 14 * ad;
}
