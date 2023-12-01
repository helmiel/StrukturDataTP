#include <iostream>
#include "DLL.h"
#include "DLL.cpp"

using namespace std;

int main()
{
    List L1, L2, L3;
    int n, inpList, inpLoc, pilihan, i = 1;
    address p,q,r;
    infotype x;
    L1.first = NULL; L1.last = NULL;
    L2.first = NULL; L2.last = NULL;

    selectMenu_1301223338();
    cin >> pilihan;
    while (pilihan != 0)
    {
        switch (pilihan)
        {
        case 1:
            cout << "\nMau masukin berapa lagu : ";
            cin >> n;
            while (i <= n)
            {
                cout << "\nMau input ke-List 1 atau List-2: ";
                cin >> inpList;
                cout << "Input ke-" << i << endl;
                cout << "Masukkan nama band : ";
                cin >> x.Band;
                cout << "Masukkan judul lagu : ";
                cin >> x.judul;
                q = createNewElmt_1301223338(x, p);
                cout << "\nInput di:\n 1.Awal \n 2.Tengah \n 3.Akhir";
                cout << "\nSilahkan pilih: ";
                cin >> inpLoc;
                if (inpList == 1)
                {
                    if(inpLoc == 1){
                        insertFirst_1301223338(L1, q);
                    }else if(inpLoc == 2){
                        show_1301223338(L1);
                        cout << "Mau di-input setelah lagu apa: ";
                        cin >> x.judul;
                        r = findLagu_1301223338(x.judul, L1);
                        insertAfter_130122333(L1, r, q);
                    }else {
                        insertLast_1301223338(L1, q);
                    }
                }else if (inpList == 2){
                    if(inpLoc == 1){
                        insertFirst_1301223338(L2, q);
                    }else if(inpLoc == 2){
                        show_1301223338(L2);
                        cout << "Mau di-input setelah lagu apa: ";
                        cin >> x.judul;
                        r = findLagu_1301223338(x.judul, L2);
                        insertAfter_130122333(L2, r, q);
                    }else {
                        insertLast_1301223338(L2, q);
                    }
                }
                i = i + 1;
            }
            i = 1;
            break;
        case 2: 
            cout << "\nIsi List 1 : " << endl;
            show_1301223338(L1);
            cout << "\nIsi List 2 : " << endl;
            show_1301223338(L2);
            cout << "\nIsi List 3 : " << endl;
            show_1301223338(L3);
            break;
        case 3:
            concat_1301223338(L1, L2, L3);
            cout << "\nIsi List 3 : " << endl;
            show_1301223338(L3);
            break;
        case 4:
            cout << "\nMau cari lagu di: \n1.List-1 \n2.List-2 \n3.List-3";
            cout << "\nSilahkan pilih: ";
            cin >> inpList;
            cout << "\nMasukkan judul lagu : ";
            cin >> x.judul;
            if(inpList == 1){
                p = findLagu_1301223338(x.judul, L1);
            }else if(inpList == 2){
                p = findLagu_1301223338(x.judul, L2);
            }else {
                p = findLagu_1301223338(x.judul, L3);
            }
            if (p != NULL) {
                cout << "Nama Band : " << p->info.Band << " "
                 << "Judul Lagu : " << p->info.judul << endl;
            }else {
                cout << "Lagu tidak ditemukan" << endl;
            }

            break;
        case 5:
            cout << "\nMau hapus lagu di: \n1.List-1 \n2.List-2 \n3.List-3";
            cout << "\nSilahkan pilih: ";
            cin >> inpList;
            cout << "\nMasukkan judul lagu : ";
            cin >> x.judul;
            if(inpList == 1){
                removeLagu_1301223338(x.judul, L1);
            }else if(inpList == 2){
                removeLagu_1301223338(x.judul, L2);
            }else {
                removeLagu_1301223338(x.judul, L3);

            }
            break;
        default:
            cout << "\nInput tidak valid" << endl;
            break;
        }
        selectMenu_1301223338();
        cin >>pilihan;
    }
    cout << "\nTerima kasih" << endl;

    //


}
