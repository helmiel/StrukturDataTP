#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
using namespace std;

// typedef int infotype;
struct infotype {
    string Band;
    string judul;
};

typedef struct elmList *address;
struct elmList {
    infotype info;
    address prev;
    address next;
};
struct List {
    address first;
    address last;
};

bool isEmpty_1301223338(List L);
address createNewElmt_1301223338(infotype X, address P);
void insertFirst_1301223338(List &L, address P);
void insertAfter_130122333(List &L, address &Prec, address &P);
void insertLast_1301223338(List &L, address P);
void deleteFirst_1301223338(List &L, address &P);
void deleteAfter_1301223338(List &L, address Prec, address &P);
void deleteLast_1301223338(List &L, address &P);
void concat_1301223338(List L1, List L2, List &L3);
address findLagu_1301223338(string judul, List L);
void removeLagu_1301223338(string judul, List &L);
void selectMenu_1301223338();
void show_1301223338(List L);

#endif // DLL_H_INCLUDED
