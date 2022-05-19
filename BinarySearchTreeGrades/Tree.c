#include <stddef.h>

#include "Tree.h"

void initializeTree(Tree *tree)
{
    tree->root = NULL;
}

void insertInTree(Tree *tree, Student *value)
{
    insertTreeNode(&tree->root, value);
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