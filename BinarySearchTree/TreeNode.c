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

bool searchTreeNode(TreeNode **treeNode, int value)
{
    if (*treeNode == NULL)
    {
        return false;
    }
    else if ((*treeNode)->value == value)
    {
        return true;
    }

    if ((*treeNode)->value < value)
    {
        searchTreeNode((*treeNode)->left, value);
    }
    else
    {
        searchTreeNode((*treeNode)->right, value);
    }

    return false;
}

void getNumberTreeNodes(TreeNode *treeNode, int *number)
{
    *number += 1;

    if (*treeNode->left != NULL)
    {
        getNumberTreeNodes(*treeNode->left, number);
    }

    if (*treeNode->right != NULL)
    {
        getNumberTreeNodes(*treeNode->right, number);
    }
}

int getTreeNodeHeight(TreeNode *treeNode)
{
    if (treeNode == NULL)
    {
        return -1;
    }

    int heightLeft = getTreeNodeHeight(*treeNode->left);
    int heightRight = getTreeNodeHeight(*treeNode->right);

    if (heightLeft < heightRight)
    {
        return heightRight + 1;
    }

    return heightLeft + 1;
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

    printf("[%c] ", treeNode->value);

    if (*treeNode->right != NULL)
    {
        traverseTreeNodeInOrder(*treeNode->right);
    }
}

void traverseTreeNodePreOrder(TreeNode *treeNode)
{
    printf("[%c] ", treeNode->value);

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

    printf("[%c] ", treeNode->value);
}

int maxTreeNode(TreeNode *treeNode)
{
    if (*treeNode->right == NULL)
    {
        return treeNode->value;
    }

    return maxTreeNode(*treeNode->right);
}