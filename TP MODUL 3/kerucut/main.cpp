#include <iostream>
#include "kerucut.h"

using namespace std;

int main()
{
    kerucut k1;
    double r, h;

    cin >> r;
    cin >> h;

    k1.jariJari = setJariJari(r);
    k1.tinggi= setTinggi(h);
    k1.volume = hitungVolume();
    k1.lp = hitungLuasPermukaan();

    cout << k1.volume << endl;
    cout << k1.lp << endl;
    return 0;
}
