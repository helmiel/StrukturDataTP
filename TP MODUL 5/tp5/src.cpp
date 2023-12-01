#include "sll.h"
#include <iostream>
using namespace std;

void createList_1301223338(List &L){
    first(L) = NULL;
}

adr createNewElm_1301223338(infotype data){
    adr p;
    p = new elmList;
    info(p) = data;
    next(p) = NULL;
    return p;
}

void insertLast_1301223338(List &L, adr p) {
    adr q;
    if(first(L) != NULL) {
        q = first(L);
        while(next(q) != NULL) {
            q = next(q);
        }
        next(q) = p;
    }else {
        first(L) = p;
    }
}

void showList_1301223338(List L) {
    adr p;
    if (first(L) == NULL){
        cout << "List Kosong" << endl;

    }else {
        p = first(L);
        while(p != NULL) {
            cout << info(p) << " ";
            p = next(p);
        }
    }
}

adr findMax_1301223338(List L){
    adr pMax = first(L);
    adr p = next(first(L));
    while (p != NULL) {
        if(info(pMax) < info(p)) {
            pMax = p;
        }
        p = next(p);
    }
    return pMax;
}

void showMiddle_1301223338(List L){
    adr p, q;

    if (first(L) == NULL) {
        cout << "List Kosong" << endl;
    }else {
        p = first(L);
        q = first(L);
        while(q != NULL && next(q) != NULL){
            p = next(p);
            q = next(next(q));
        }
        cout << "Middle elemen : " << info(p) << endl;
    }
}

int selectMenu_1301223338() {
    cout << "===== MENU =====" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan data yang berisi nilai terbesar" << endl;
    cout << "4. Menampilkan data yang berada di tengah list" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilihan menu: ";

    int input = 0;
    cin >> input;

    return input;
}
