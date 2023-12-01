#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

typedef char infotype;
struct stack {
    infotype info[15];
    int top;
};

void createStack_1301223338(stack &s);
bool isEmpty_1301223338(stack s);
bool isFull_1301223338(stack s);
void push_1301223338(stack &s, infotype x);
infotype pop_1301223338(stack &s);
void printInfo_1301223338(stack s);

#endif // STACK_H_INCLUDED
