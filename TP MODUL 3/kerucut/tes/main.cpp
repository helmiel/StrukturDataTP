#include <iostream>
#include "kerucut.h"
#include "kerucut.cpp"
using namespace std;

int main() {
    Kerucut kerucut1;
    double r, h;

    cout << "Masukkan jari-jari kerucut: ";
    cin >> r;
    cout << "Masukkan tinggi kerucut: ";
    cin >> h;

    setJariJari(&kerucut1, r);
    setTinggi(&kerucut1, h);

    cout << "Volume kerucut: " << hitungVolume(kerucut1) << endl;
    cout << "Luas permukaan kerucut: " << hitungLuasPermukaan(kerucut1) << endl;

    return 0;
}
