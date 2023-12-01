#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
using namespace std;
typedef int infotype;
typedef struct elmlist *address;

struct elmlist {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList_1301223338(List &L);
address allocate_1301223338(infotype x);
void insertFirst_1301223338(List &L, address P);
void printInfo_1301223338(List L);

// Sesi Have Fun
void insertLast_1301223338(List &L, address P);
void insertAfter_1301223338(List &L, address prec, address P);
void deleteLast_1301223338(List &L, address P);
void deleteAfter_1301223338(List &L, address prec, address P);
address searchInfo_1301223338(List &L, infotype x);


#endif // LIST_H_INCLUDED
