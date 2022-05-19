#include "Student.h"

// We can also use a pointer to make coding easier.
typedef struct TreeNode
{
    Student *value;
    struct TreeNode **left;
    struct TreeNode **right;
} TreeNode;

void insertTreeNode(TreeNode **treeNode, Student *value);

void traverseTreeNodeInOrder(TreeNode *treeNode);

void traverseTreeNodePreOrder(TreeNode *treeNode);

void traverseTreeNodePostOrder(TreeNode *treeNode);