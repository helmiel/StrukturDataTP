#include "kerucut.h"
#include <cmath>

// Kerucut::Kerucut() {
//     jariJari = 0.0;
//     tinggi = 0.0;
// }

void setJariJari(Kerucut *k1, double r) {
    (*k1).jariJari = r;
}

void setTinggi(Kerucut *k1, double h) {
    (*k1).tinggi = h;
}

double hitungVolume(Kerucut k1) {
    return (1.0 / 3.0) * M_PI * pow(k1.jariJari, 2) * k1.tinggi;
}

double hitungLuasPermukaan(Kerucut k1) {
    double s = sqrt(pow(k1.jariJari, 2) + pow(k1.tinggi, 2));
    return M_PI * k1.jariJari * (k1.jariJari + s);
}
