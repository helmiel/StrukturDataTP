#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
    adrNode root = NULL;
    adrNode p;
    int x[9] = {5,3,9,10,4,7,1,8,6};
    int length = sizeof(x) / sizeof(x[0]);
    cout << "========================================================================================" << endl;
    for(int i = 0; i < length; i++){
        cout << x[i] << " ";
        p = newNode_1301223338(x[i]);
        insertNode_1301223338(root,p);
    }
    cout << "\n\nPre Order\t: "; printPreOrder_1301223338(root); cout << endl;
    cout << "\nDescendent of Node 9\t: "; printDescendant_1301223338(root, 9); cout << endl;
    cout << "\nSum of BST info: " << sumNode_1301223338(root) << endl;
    cout << "Number of Leaves: " << countLeaves_1301223338(root) << endl;
    cout << "Height of tree: " << heightTree_1301223338(root) << endl;
    cout << "========================================================================================" << endl;
    return 0;
}
