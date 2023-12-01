#ifndef KERUCUT_H
#define KERUCUT_H

struct Kerucut {
    double jariJari;
    double tinggi;
};

    // Kerucut(); // Constructor
void setJariJari(Kerucut *k1, double r);
void setTinggi(Kerucut *k1, double h);
double hitungVolume(Kerucut k1);
double hitungLuasPermukaan(Kerucut k1);

#endif
