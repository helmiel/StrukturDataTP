#ifndef KERUCUT_H_INCLUDED
#define KERUCUT_H_INCLUDED

struct kerucut {
    double jariJari;
    double tinggi;
    double volume;
    double lp;

};

double setJariJari(double r);
double setTinggi(double h);
double hitungVolume();
double hitungLuasPermukaan();

#endif // KERUCUT_H_INCLUDED
