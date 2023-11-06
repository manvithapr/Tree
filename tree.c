// tree.c
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

TreeNode* createNode(int data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    if (newNode) {
        newNode->data = data;
        newNode->firstChild = NULL;
        newNode->nextSibling = NULL;
    }
    return newNode;
}

void addChild(TreeNode* parent, TreeNode* child) {
    if (parent && child) {
        if (parent->firstChild == NULL) {
            parent->firstChild = child;
        } else {
            TreeNode* temp = parent->firstChild;
            while (temp->nextSibling != NULL) {
                temp = temp->nextSibling;
            }
            temp->nextSibling = child;
        }
    }
}

void printTree(TreeNode* root) {
    if (root) {
        printf("%d -> ", root->data);
        TreeNode* child = root->firstChild;
        while (child) {
            printTree(child);
            child = child->nextSibling;
        }
    }
}
