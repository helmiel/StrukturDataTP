#include "Tree.h"

adrNode newNode_1301223338(infotype x){
    adrNode p = new node;
    p->info = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

adrNode findNode_1301223338(adrNode root, infotype x){
    if (root == NULL || root->info == x) {
        return root;
    }
    if (x < root->info) {
        return findNode_1301223338(root->left, x);
    }
    else {
        return findNode_1301223338(root->right, x);
    }
}

void insertNode_1301223338(adrNode &root, adrNode p){
    if(root == NULL){
        root = p;
    }else {
        if(p->info < root->info){
            insertNode_1301223338(root->left, p);
        }else {
            insertNode_1301223338(root->right, p);
        }
    }
}

void printPreOrder_1301223338(adrNode root){
    if(root != NULL){
        cout << root->info << " ";
        printPreOrder_1301223338(root->left);
        printPreOrder_1301223338(root->right);
    }

}

void printDescendant_1301223338(adrNode root, infotype x){
    if (root != NULL) {
        if (root->info == x) {
            printPreOrder_1301223338(root->left);
            printPreOrder_1301223338(root->right);
        } else if (x < root->info) {
            printDescendant_1301223338(root->left, x);
        } else {
            printDescendant_1301223338(root->right, x);
        }
    }
}

int sumNode_1301223338(adrNode root){
    if(root == NULL){
        return 0;
    }else {
        return root->info + sumNode_1301223338(root->left) + sumNode_1301223338(root->right);
    }
}

int countLeaves_1301223338(adrNode root){
    if(root == NULL){
        return 0;
    }else if (root->left == NULL && root->right == NULL){
        return 1;
    }else {
        return countLeaves_1301223338(root->left) + countLeaves_1301223338(root->right);
    }
}

int heightTree_1301223338(adrNode root){
    if(root == NULL){
        return 0;
    }else {
        int leftHeight = heightTree_1301223338(root->left);
        int rightHeight = heightTree_1301223338(root->right);
        if (leftHeight >= rightHeight){
            return leftHeight + 1;
        }else{
            return rightHeight + 1;
        }
    }
}
