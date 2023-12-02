#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
using namespace std;

struct jadwalPenerbangan{
    string Kode;
    string Jenis;
    string Tanggal;
    string Waktu;
    string Asal;
    string Tujuan;
    int Kapasitas;
};

typedef struct elemenJadwal *adr_JadwalP;

typedef jadwalPenerbangan infotype;

struct elemenJadwal {
    infotype info;
    adr_JadwalP next;
};

struct ListJadwal {
    adr_JadwalP First;
};

void createListJadwal_1301223338(ListJadwal &L);
adr_JadwalP createElemenJadwal_1301223338(infotype X);
void insertLastJ_1301223338(ListJadwal &L, adr_JadwalP P);
void showJadwal_1301223338(ListJadwal L);
void deleteFirstJ_1301223338(ListJadwal &L, adr_JadwalP &P);
bool searchJ_1301223338(ListJadwal L, string dari, string ke, string jadwal);


#endif // FLIGHT_H_INCLUDED
