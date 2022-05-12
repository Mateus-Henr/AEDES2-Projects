#include "TreeNode.h"

typedef struct
{
    TreeNode *root;
} Tree;

void initializeTree(Tree *tree);

void insertInTree(Tree *tree, int value);

void traverseTreeInOrder(Tree *tree);

void traverseTreePreOrder(Tree *tree);

void traverseTreePostOrder(Tree *tree);