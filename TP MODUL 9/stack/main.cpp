#include <iostream>
#include "stack.h"
#include "stack.cpp"

using namespace std;

int main()
{
    // NIM : 1301223338 (8 % 4 = 0)
    stack s;
    createStack_1301223338(s);
    string uInp;
    infotype temp;
    int i,c,lenuInp;
    cout << "Input : ";
    cin >> uInp;
    lenuInp = uInp.length();
    while (lenuInp > 0)
    {
        push_1301223338(s, uInp[lenuInp - 1]);
        lenuInp--;
    }
    cout << "isi stack awal: " << endl;
    printInfo_1301223338(s);

    cout << "isi stack sesudah pop: " << endl;
    while(!isEmpty_1301223338(s)){
        temp = pop_1301223338(s);
        c++;
        if(c >= 6){
            cout << temp;
        }
    }
    cout << endl;
    return 0;
}
