#include <iostream>
#include "sll.h"
#include "src.cpp"

using namespace std;

int main()
{
    List myList;
    int pilihan = 0, n, i=1;
    infotype data;
    adr p;
    char back;

    createList_1301223338(myList);
    pilihan = selectMenu_1301223338();

    while(pilihan != 0) {
        if(pilihan == 1) {
            cout << "Jumlah data yang akan ditambahkan: ";
            cin >> n;
            while(i <= n) {
                cout << "Masukkan data baru : ";
                cin >> data;
                p = createNewElm_1301223338(data);
                insertLast_1301223338(myList, p);
                i = i + 1;
            }
            i = 1;
        }
        else if (pilihan == 2)
        {
            showList_1301223338(myList);
        }else if(pilihan == 3){
            p = findMax_1301223338(myList);
            cout << info(p) << endl;
        }
        else if (pilihan == 4)
        {
            showMiddle_1301223338(myList);
        }

        cout << "\nKembali ke menu utama? (Y/N): ";
        cin >> back;
        if (back == 'Y') {
            pilihan = selectMenu_1301223338();
        }else {
            // pilihan = 0;
            pilihan = pilihan;
        }
    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    
    return 0;
}
