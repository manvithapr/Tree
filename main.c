// main.c
#include <stdio.h>
#include "tree.h"

int main() {
    TreeNode* root = createNode(1);
    TreeNode* child1 = createNode(2);
    TreeNode* child2 = createNode(3);
    TreeNode* child3 = createNode(4);

    addChild(root, child1);
    addChild(root, child2);
    addChild(child1, child3);

    printf("General Tree: ");
    printTree(root);
    printf("\n");

    return 0;
}
