#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#define first(L) L.first
#define next(p) p->next
#define info(p) p->info

#include <iostream>
using namespace std;

// Helmi Efendi Lubis
// 1301223338, 3 mod 3 = 0

typedef int infotype;
typedef struct elmList *adr;

struct elmList{
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void createList_1301223338(List &L);
adr createNewElm_1301223338(infotype data);
void insertLast_1301223338(List &L, adr p);
void showList_1301223338(List L);

adr findMax_1301223338(List L);
void showMiddle_1301223338(List L);

int selectMenu_1301223338();


#endif // SLL_H_INCLUDED
