#include <iostream>
#include "list.h"
#include "list.cpp"
using namespace std;

int main()
{
    List myList;
    infotype dNIM;
    address p;
    createList_1301223338(myList);

    // Have fun
    int i = 1;
    cout << "Masukkan NIM perdigit" << endl;
    while (i <= 10)
    {
        cout << "Digit " << i << " : ";
        cin >> dNIM;
        p = allocate_1301223338(dNIM);
        insertLast_1301223338(myList, p);
        i = i + 1;
    }
    cout << "Isi list : ";
    printInfo_1301223338(myList);

    // cout << "Masukkan digit pertama NIM : ";
    // cin >> dNIM;
    // p = allocate_1301223338(dNIM);
    // insertFirst_1301223338(myList, p);
    // printInfo_1301223338(myList);

    // cout << "Masukkan digit kedua NIM : ";
    // cin >> dNIM;
    // p = allocate_1301223338(dNIM);
    // insertFirst_1301223338(myList, p);
    // printInfo_1301223338(myList);

    // cout << "Masukkan digit ketiga NIM : ";
    // cin >> dNIM;
    // p = allocate_1301223338(dNIM);
    // insertFirst_1301223338(myList, p);
    // printInfo_1301223338(myList);
}
