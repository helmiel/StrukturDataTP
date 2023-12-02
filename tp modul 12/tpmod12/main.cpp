#include <iostream>
#include "flight.h"

using namespace std;

int main()
{
    ListJadwal L;
    int n;
    infotype x;
    adr_JadwalP temp;

    createListJadwal_1301223338(L);
    cin >> n;

    while (n >= 1){
        cout << "Masukkan kode: "; cin >> x.Kode;
        cout << "Masukkan jenis: "; cin >> x.Jenis;
        cout << "Masukkan tanggal: "; cin >> x.Tanggal;
        cout << "Masukkan waktu: "; cin >> x.Waktu;
        cout << "Masukkan asal: "; cin >> x.Asal;
        cout << "Masukkan tujuan: "; cin >> x.Tujuan;
        cout << "Masukkan kapasitas: "; cin >> x.Kapasitas;
        temp = createElemenJadwal_1301223338(x);
        insertLastJ_1301223338(L, temp);
        n = n - 1;
    }

    cout << "\nSebelum delete:" << endl;
    showJadwal_1301223338(L);

    deleteFirstJ_1301223338(L, temp);
    cout << "\nSesudah delete:" << endl;
    showJadwal_1301223338(L);

    cout << boolalpha << searchJ_1301223338(L, "surabaya", "malang", "9-Desember-2022") << endl;

    //Helmi Efendi Lubis
}
