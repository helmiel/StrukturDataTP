#include "stack.h"

void createStack_1301223338(stack &s){
    s.top = 0;
}

bool isEmpty_1301223338(stack s) {
    return s.top == 0;
}

bool isFull_1301223338(stack s) {
    return s.top == 15;
}

void push_1301223338(stack &s, infotype x){
    if(!isFull_1301223338(s)){
        s.top = s.top + 1;
        s.info[s.top] = x;
    }else {
        cout << "Stack penuh" << endl;
    }
}

infotype pop_1301223338(stack &s){
    infotype x;
    if(!isEmpty_1301223338(s)){
        x = s.info[s.top-1];
        s.top = s.top - 1;
    }
    return x;
}

void printInfo_1301223338(stack s){
    int i;
    for (i = s.top; i >= 1; i--){
        cout << s.info[i];
    }
    cout << endl;
}