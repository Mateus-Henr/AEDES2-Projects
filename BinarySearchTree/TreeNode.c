#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "TreeNode.h"

TreeNode *initializeTreeNode(int value)
{
    TreeNode *treeNode = (TreeNode *) malloc(sizeof(TreeNode));
    treeNode->value = value;

    treeNode->left = (TreeNode **) malloc(sizeof(TreeNode *));
    *treeNode->left = NULL;

    treeNode->right = (TreeNode **) malloc(sizeof(TreeNode *));
    *treeNode->right = NULL;

    return treeNode;
}

void insertTreeNode(TreeNode **treeNode, int value)
{
    if (*treeNode == NULL)
    {
        *treeNode = initializeTreeNode(value);
        return;
    }

    if (value < (*treeNode)->value)
    {
        insertTreeNode((*treeNode)->left, value);
    }
    else
    {
        insertTreeNode((*treeNode)->right, value);
    }
}

void traverseTreeNodeInOrder(TreeNode *treeNode)
{
    if (*treeNode->left != NULL)
    {
        traverseTreeNodeInOrder(*treeNode->left);
    }

    printf("[%d] ", treeNode->value);

    if (*treeNode->right != NULL)
    {
        traverseTreeNodeInOrder(*treeNode->right);
    }
}

void traverseTreeNodePreOrder(TreeNode *treeNode)
{
    printf("[%d] ", treeNode->value);

    if (*treeNode->left != NULL)
    {
        traverseTreeNodeInOrder(*treeNode->left);
    }

    if (*treeNode->right != NULL)
    {
        traverseTreeNodeInOrder(*treeNode->right);
    }
}

void traverseTreeNodePostOrder(TreeNode *treeNode)
{
    if (*treeNode->left != NULL)
    {
        traverseTreeNodeInOrder(*treeNode->left);
    }

    if (*treeNode->right != NULL)
    {
        traverseTreeNodeInOrder(*treeNode->right);
    }

    printf("[%d] ", treeNode->value);
}