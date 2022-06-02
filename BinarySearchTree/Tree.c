#include <stddef.h>

#include "Tree.h"

void initializeTree(Tree *tree)
{
    tree->root = NULL;
}

void insertInTree(Tree *tree, int value)
{
    insertTreeNode(&tree->root, value);
}

bool searchInTree(Tree *tree, int value)
{
    return searchTreeNode(&tree->root, value);
}

int getNumberNodes(Tree *tree)
{
    int start = 0;

    getNumberTreeNodes(tree->root, &start);

    return start;
}

int getHeight(Tree *tree)
{
    return getTreeNodeHeight(tree->root);
}

int max(Tree *tree)
{
    return maxTreeNode(tree->root);
}

void traverseTreeInOrder(Tree *tree)
{
    traverseTreeNodeInOrder(tree->root);
}

void traverseTreePreOrder(Tree *tree)
{
    traverseTreeNodePreOrder(tree->root);
}

void traverseTreePostOrder(Tree *tree)
{
    traverseTreeNodePostOrder(tree->root);
}