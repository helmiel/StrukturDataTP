#include <iostream>
#include "list.h"
using namespace std;

void createList_1301223338(List &L){
    first(L) = NULL;
}

address allocate_1301223338(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertFirst_1301223338(List &L, address P){
    next(P) = first(L);
    first(L) = P;
}

void printInfo_1301223338(List L){
    address p = first(L);
    while (p != NULL){
        cout << info(p);
        p = next(p);
    }
    cout << endl;
}

// Sesi Have Fun

void insertLast_1301223338(List &L, address P) {
    address q;
    if (first(L) != NULL) {
        q = first(L);
        while (next(q) != NULL)
        {
            q = next(q);
        }
        next(q) = P;
        P = NULL;
    }else {
        first(L) = P;
    }
}

void insertAfter_1301223338(List &L, address prec, address P) {
    if (first(L) != NULL) {
        next(P) = next(prec);
        next(prec) = P;
        P = NULL;
    }else {
        first(L) = P;
    }
}

void deleteLast_1301223338(List &L, address P) {
    if (first(L) == NULL) {
        P = NULL;
        cout << "List Kosong" << endl;
    }else {
        if (L.first->next == NULL) {
            P = first(L);
            first(L) = NULL;
        }else {
            address q = first(L);
            while(next(q) != NULL) {
                P = q;
                q = next(q);
            }
            next(P) = NULL;
        }
    }
}

void deleteAfter_1301223338(List &L, address prec, address P) {
    if (first(L) == NULL) {
        P = NULL;
        cout << "List Kosong" << endl;
    }else {
        P = next(prec);
        next(prec) = next(P);
        next(P) = NULL;
    }
}

address searchInfo_1301223338(List &L, infotype x) {
    address p = NULL;
    if (first(L) != NULL)
    {
        p = first(L);
        while(p != NULL && info(p) != x){
            p = next(p);
        }
    }
    return p;
}
