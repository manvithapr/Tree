// tree.h
#ifndef TREE_H
#define TREE_H

typedef struct TreeNode TreeNode;

struct TreeNode {
    int data;
    TreeNode* firstChild; // Pointer to the first child node
    TreeNode* nextSibling; // Pointer to the next sibling node
};

TreeNode* createNode(int data);
void addChild(TreeNode* parent, TreeNode* child);
void printTree(TreeNode* root);

#endif // TREE_H
