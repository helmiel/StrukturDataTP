#include "DLL.h"

bool isEmpty_1301223338(List L){
    return L.first == NULL;
}

address createNewElmt_1301223338(infotype X, address P) {
    P = new elmList;
    P->info = X;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void insertFirst_1301223338(List &L, address P) {
    if(isEmpty_1301223338(L)){
        L.first = P;
        L.last = P;
    }else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertAfter_130122333(List &L, address &Prec, address &P) {
    if(Prec == L.last) {
        insertLast_1301223338(L, P);
    }else {
        P->next = Prec->next;
        P->prev = Prec;
        Prec->next->prev = P;
        Prec->next = P;    
    }
    
}

void insertLast_1301223338(List &L, address P) {
    if(isEmpty_1301223338(L)){
        L.first = P;
        L.last = P;
    }else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}

void deleteFirst_1301223338(List &L, address &P) {
    P = L.first;
    L.first  = P->next;
    P->next = NULL;
    L.first->prev = NULL;
}

void deleteAfter_1301223338(List &L, address Prec, address &P) {
    if(Prec->next == L.last){
        deleteLast_1301223338(L, P);
    }else {
        P = Prec->next;
        Prec->next = P->next;
        P->next->prev = Prec;
        P->next = NULL;
        P->prev = NULL;
    }
}

void deleteLast_1301223338(List &L, address &P) {
    P = L.last;
    L.last = P->prev;
    P->prev = NULL;
    L.last->next = NULL;
}

void concat_1301223338(List L1, List L2, List &L3) {
    L3.first = NULL; L3.last = NULL;
    address p = L1.first;
    address q = L2.first;
    while(p != NULL){
        insertLast_1301223338(L3, p);
        p = p->next;
    }
    
    while(q != NULL){
        insertLast_1301223338(L3, q);
        q = q->next;
    }
}

address findLagu_1301223338(string judul, List L){
    address p, q, find;
    if (isEmpty_1301223338(L)){
        find = NULL;
    }
    else{
        p = L.first;
        q = L.last;
        while(p->info.judul != judul && q->info.judul != judul && p != q && p->next != q){
            p = p->next;
            q = q->next;
        }

        if(p->info.judul == judul) {
            find = p;
        }else if(q->info.judul == judul){
            find = q;
        }else{
            find = NULL;
        }
    }
    return find;
}

void removeLagu_1301223338(string judul, List &L) {
    address check = findLagu_1301223338(judul, L);
    address temp;
    if (isEmpty_1301223338(L))
    {
        cout << "List Kosong" << endl;
    }
    else
    {
        if(L.first == check && L.last == check){
            L.first = NULL;
            L.last = NULL;
        }else {
            if(L.first == check) {
                deleteFirst_1301223338(L, check);
            }else if(L.last == check){
                deleteLast_1301223338(L, check);
            }else {
                deleteAfter_1301223338(L, check, temp);
            }
        }
        
    }
}

void selectMenu_1301223338() {
    cout << "\n===== MENU =====" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menggabungkan list1 dan list2" << endl;
    cout << "4. Mencari Lagu di dalam List" << endl;
    cout << "5. Menghapus lagu di dalam list" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan menu: ";
}

void show_1301223338(List L){
    address p = L.first;
    if(isEmpty_1301223338(L)){
        cout << "List Kosong" << endl;
    }else {
        while(p != NULL){
            cout << "Nama Band : " << p->info.Band << " "
                 << "Judul Lagu : " << p->info.judul << endl;
            p = p->next;
        }
    }
}