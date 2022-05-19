#include <stdio.h>

/*  Symmetric Binary B-tree (SBB)

    • This an example of a tree that balances itself.


    Characteristics
    • It has two types of pointers, vertical and horizontal, such as:
     - All the paths from the root to each leaf has the same number of vertical pointers.
     - It cannot exist two horizontal pointer in a row.


    Situations that are not allowed
    [5] -> [7] -> [9] (DD)
    [5] <- [7] <- [9] (DD)
    OBS: If transformations should happen as above, a subtree is created based on the middle element.


    Situations that are allowed
    [5] -> [9] (DE)
    [7] <-

    [5] <- [9] (ED)
        -> [7]
    OBS: In these scenarios, the tree is going to become vertical, and the last inserted node will be the subtree's root.

 */

int main()
{
    printf("Hello, World!\n");
    return 0;
}
