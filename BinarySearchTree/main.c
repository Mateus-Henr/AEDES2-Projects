#include <stdio.h>

#include "Tree.h"

/*  Binary Search Tree (BST)

    • It's binary because every node of the tree can have at maximum 2 children.
    • Since we are using C, we will be allocating memory dynamically for every node.



    Creating a node
    • Whenever we initialize a node, we also have to initialize both of its children.
    OBS: We cannot let the children be initialized later because of memory trash.



    Insertion operation
    •

    Values to be inserted: 7, 4, 10, 2.

    Step 1 (Initialize the tree)
        [NULL]


    Step 2 (Insert 7)
            [7]
    [NULL]       [NULL]


    Step 3 (Insert 4)
                    [7]
            [4]             [NULL]
    [NULL]      [NULL]


    Step 4 (Insert 10)
                          [7]
            [4]                       [10]
    [NULL]       [NULL]       [NULL]        [NULL]


    Step 5 (Insert 2)
                                    [7]
                    [4]                               [10]
            [2]             [NULL]           [NULL]         [NULL]
    [NULL]      [NULL]

    OBS: When inserting a duplicate value, we can either choose to add it to the right or to the left.
         After doing this condition, we will


    Traversing a tree
    • As mentioned before, there are tree types of ways to traverse a binary search tree.
    • Notice that all the methods here, use the recursion to get the best performance.
    • The recursion stack is the tricky part here.
    • The recursion process is called from each node.


    In-order traversal (most common)
    It visits the nodes left, then parent, then right, consequently, in ascending order.
    In descending order, we just change the order of this operation, then it's right, parent, left.

    Step by step
        1. Visit the subtree on the left.
        2. Visit the root.
        3. Visit the subtree on the right.

    Graphic representation
           [] 2°
    1º []        [] 3º

    In the bst example, we have: 2, 4, 7, 10.


    Pre-order traversal
    It visits the nodes parent, then left, then right.

    Step by step
        1. Visit the root.
        2. Visit the subtree on the left.
        3. Visit the subtree on the right.

    Graphic representation
           [] 1°
    2º []        [] 3º

    In the bst example, we have: 7, 4, 2, 10.


    Post-order traversal
    It visits the nodes left, then right, then parent.

    Step by step
        1. Visit the subtree on the left.
        2. Visit the subtree on the right.
        3. Visit the root.

    Graphic representation
           [] 3°
    1º []        [] 2º

    In the bst example, we have: 2, 4, 10, 7.

    Exercise
    a) Pre-order = 2, 1, 3, 4,
    b) In-order = 1, 2, 3, 4, 5, 6, 7.
    c) Post-order =


    Height of a tree
    • This is the distance between the root and the bottom most node (leaf).
    • The root's height is 0. So, if a tree has zero nodes, it has a height of 0.
    • An empty tree has a height of -1.
    • We can create a recursive function to calculate the tree's height.


    Tree's width
    • Can be calculated using a queue.


    Removing from a BST

    Node with two children
    • When performing this operation, we have to either choose to replace the deleted value by a
      value that's smaller (predecessor) or greater (successor) than the parent.
      OBS: Notice that once we choose to work with the predecessor or successor we have to keep this
           for all the removals.

    Node with one child
    • When this happens we can replace the child with the parent.

    Node with zero children
    • The easiest scenario, you only delete the reference in the parent.

    OBS: It's important to remember that whatever case happens, it's important to clean the node in
         the memory.
 */

int main()
{
    Tree tree;

    initializeTree(&tree);

    insertInTree(&tree, 'Q');
    insertInTree(&tree, 'U');
    insertInTree(&tree, 'E');
    insertInTree(&tree, 'S');
    insertInTree(&tree, 'T');
    insertInTree(&tree, 'A');
    insertInTree(&tree, 'O');
    insertInTree(&tree, 'F');
    insertInTree(&tree, 'C');
    insertInTree(&tree, 'I');
    insertInTree(&tree, 'L');

    printf("Is 3 in the tree = %d\n", searchInTree(&tree, 3));

    printf("Is 7 in the tree = %d\n\n", searchInTree(&tree, 7));

    printf("Number of nodes = %d\n\n", getNumberNodes(&tree));

    printf("Height of the tree = %d\n\n", getHeight(&tree));

    printf("Max value = %c\n\n", max(&tree));

    printf("In-Order Traversal\n");
    traverseTreeInOrder(&tree);

    printf("\n\nPre Order Traversal\n");
    traverseTreePreOrder(&tree);

    printf("\n\nPost Order Traversal\n");
    traverseTreePostOrder(&tree);

    printf("\n");

    return 0;
}
