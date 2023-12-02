#include "flight.h"

void createListJadwal_1301223338(ListJadwal &L){
    L.First = NULL;
}

adr_JadwalP createElemenJadwal_1301223338(infotype X){
    adr_JadwalP p = new elemenJadwal;
    p->info = X;
    p->next = NULL;
    return p;
}

void insertLastJ_1301223338(ListJadwal &L, adr_JadwalP P){
    adr_JadwalP q;
    if(L.First == NULL){
        L.First = P;
    }else {
        q = L.First;
        while(q->next != NULL){
            q = q->next;
        }
        q->next = P;
    }
}

void showJadwal_1301223338(ListJadwal L){
    adr_JadwalP p;
    if(L.First == NULL){
        cout << "List Kosong" << endl;
    }else {
        p = L.First;
        while(p != NULL){
            cout << "Kode: " << p->info.Kode << "   Jenis: " << p->info.Jenis << "  Tanggal: " << p->info.Tanggal << "  Waktu: " << p->info.Waktu << "  Asal: " << p->info.Asal << "    Tujuan: " << p->info.Tujuan << "    Kapasitas: " << p->info.Kapasitas << endl;
            p = p->next;
        }
    }
}

void deleteFirstJ_1301223338(ListJadwal &L, adr_JadwalP &P){
    adr_JadwalP temp;
    if(L.First == NULL){
        P = NULL;
    }else {
        P = L.First;
        temp = L.First;
        while(P->next != NULL){
            temp = P;
            P = P->next;
        }
        temp->next = NULL;
        //L.First = L.First->next;
        //P->next = NULL;
    }
}

bool searchJ_1301223338(ListJadwal L, string dari, string ke, string jadwal){
    adr_JadwalP p;
    if(L.First == NULL){
        return false;
    }else {
        p = L.First;
        while(p != NULL && p->info.Asal != dari && p->info.Tujuan != ke && p->info.Tanggal != jadwal){
            p = p->next;
        }
        if(p == NULL){
            return false;
        }else {
            return true;
        }
    }
}
