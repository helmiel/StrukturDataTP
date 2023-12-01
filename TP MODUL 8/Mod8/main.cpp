#include <iostream>
#include "doubleCircular.h"
#include "doubleCircular.cpp"

using namespace std;

int main()
{
    List L, L2;
    createList_1301223338(L);
    insertLast_1301223338(L, alokasi_1301223338(5));
    insertLast_1301223338(L, alokasi_1301223338(15));
    insertLast_1301223338(L, alokasi_1301223338(25));
    insertLast_1301223338(L, alokasi_1301223338(35));
    insertLast_1301223338(L, alokasi_1301223338(45));
    insertLast_1301223338(L, alokasi_1301223338(55));
    insertLast_1301223338(L, alokasi_1301223338(65));
    insertLast_1301223338(L, alokasi_1301223338(75));
    insertLast_1301223338(L, alokasi_1301223338(85));
    cout << "Isi List Awal: " << endl;
    printInfo_1301223338(L);

    // cout << "Isi List reverse: " << endl;
    // reverseList_1301223338(L, L2);
    // printInfo_1301223338(L2);

    deleteByValue_1301223338(L, 5);
    deleteByValue_1301223338(L, 100);
    deleteByValue_1301223338(L, 45);
    deleteByValue_1301223338(L, 85);
    cout << "Isi List Setelah dihapus: " << endl;
    printInfo_1301223338(L);
}
