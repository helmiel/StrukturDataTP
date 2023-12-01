#include "queue.h"
#include "queue.cpp"
#include <iostream>

using namespace std;

int main()
{
    queue Q, Qodd, Qeven;
    createQueue_1301223338(Q);

    infotype uInp;
    address p;

    int i = 1;
    while(i <= 10){
        cout << "Input ke-" << i << ":";
        cin >> uInp;
        p = alokasi_1301223338(uInp);
        enQueue_1301223338(Q, p);
        i++;
    }
    cout << endl;
    cout << "Kondisi awal" << endl;
    printInfo_1301223338(Q);

    cout << endl;   
    ganjilGenap_1301223338(Q, Qodd, Qeven);
    cout << "Kondisi akhir" << endl;
    cout << "Queue Utama" << endl;
    printInfo_1301223338(Q);

    cout << endl;
    cout << "Queue Ganjil" << endl;
    printInfo_1301223338(Qodd);

    cout << endl;
    cout << "Queue Genap" << endl;
    printInfo_1301223338(Qeven);
}
