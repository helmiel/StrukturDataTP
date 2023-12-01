#include <iostream>
#include "kerucut.h"
#include <cmath>

double setJariJari(double r) {
    return r;
}

double setTinggi(double h) {
    return h;
}

double kerucut::hitungVolume() {
    return (1.0/3.0) * M_PI * pow(jariJari, 2) * tinggi;
}

double kerucut::hitungLuasPermukaan() {
    double hasil = sqrt(pow(jariJari, 2) + pow(tinggi, 2));
    return M_PI * jariJari * (jariJari + hasil);
}
