#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

typedef int infotype;
typedef struct node *adrNode;

struct node {
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode_1301223338(infotype x);
adrNode findNode_1301223338(adrNode root, infotype x);
void insertNode_1301223338(adrNode &root, adrNode p);
void printPreOrder_1301223338(adrNode root);
void printDescendant_1301223338(adrNode root, infotype x);
int sumNode_1301223338(adrNode root);
int countLeaves_1301223338(adrNode root);
int heightTree_1301223338(adrNode root);

#endif // TREE_H_INCLUDED
