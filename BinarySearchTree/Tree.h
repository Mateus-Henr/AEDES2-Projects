#include <stdbool.h>

#include "TreeNode.h"

typedef struct
{
    TreeNode *root;
} Tree;

void initializeTree(Tree *tree);

void insertInTree(Tree *tree, int value);

bool searchInTree(Tree *tree, int value);

int getNumberNodes(Tree *tree);

int getHeight(Tree *tree);

int max(Tree *tree);

void traverseTreeInOrder(Tree *tree);

void traverseTreePreOrder(Tree *tree);

void traverseTreePostOrder(Tree *tree);