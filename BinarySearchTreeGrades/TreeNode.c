#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "TreeNode.h"


TreeNode *initializeTreeNode(Student *value);

void printValue(Student *value);


TreeNode *initializeTreeNode(Student *value)
{
    TreeNode *treeNode = (TreeNode *) malloc(sizeof(TreeNode));

    treeNode->value = value;

    treeNode->left = (TreeNode **) malloc(sizeof(TreeNode *));
    *treeNode->left = NULL;

    treeNode->right = (TreeNode **) malloc(sizeof(TreeNode *));
    *treeNode->right = NULL;

    return treeNode;
}

void insertTreeNode(TreeNode **treeNode, Student *value)
{
    if (*treeNode == NULL)
    {
        *treeNode = initializeTreeNode(value);
        return;
    }

    if (value->grade < (*treeNode)->value->grade)
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

    printValue(treeNode->value);

    if (*treeNode->right != NULL)
    {
        traverseTreeNodeInOrder(*treeNode->right);
    }
}

void traverseTreeNodePreOrder(TreeNode *treeNode)
{
    printValue(treeNode->value);

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

    printValue(treeNode->value);
}

void printValue(Student *value)
{
    printf("STUDENT = %s %d %lf\n", value->name, value->registration, value->grade);
}