#include <stdio.h>
#include "Tree.h"
#include "Files.h"

#define ERROR_FILE "\nError during file read"

int main()
{
    Tree tree;

    initializeTree(&tree);

    if (!readFileIntoBST(&tree, "file1.txt"))
    {
        printf(ERROR_FILE);
    }


    printf("In-Order Traversal\n");
    traverseTreeInOrder(&tree);

    printf("\n\nPre Order Traversal\n");
    traverseTreePreOrder(&tree);

    printf("\n\nPost Order Traversal\n");
    traverseTreePostOrder(&tree);

    printf("\n");

    return 0;
}
