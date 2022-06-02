#include <stdio.h>
#include "stddef.h"
#include "Tree.h"

/*  Ternary Search Tree (TST)

    • This tree has a characteristic of only have three pointers at each node.

    Types of pointers
    • Left - When the value is the smallest.
    • Middle - When the value is equal.
    • Right - When the value is the greatest.

    Additional fields
    • Value - To store the value.
    • End of string - This marks if a string has ended to get the entire word.

    Ternary search tree vs TRIE
    • TSTs are way more efficient regarding space than TRIEs since they only store 3 pointers, instead of 26, that the trie does.
    • Tries are suitable when there is a proper distribution of words over the alphabets so that spaces are utilized most efficiently.
      Otherwise, ternary search trees are better. Ternary search trees are efficient to use (in terms of space) when the strings to be stored share a
      common prefix.

    Insertion example
    - Add the following words into the tree: "cat", "cats", "dog", "ducks", "bee".

    1° Step
    [NULL]

    2° Step
    [C]
    [A]
    [T]

    3° Step
    [C]
    [A]
    [T] {endOfString}
    [S] {endOfString}

    4° Step
    [C]
    [A]                 [D]
    [T] {endOfString}   [O]
    [S] {endOfString}   [G] {endOfString}

    5° Step
    [C]
    [A]                 [D]
    [T] {endOfString}   [O]                 [U]
    [S] {endOfString}   [G] {endOfString}   [C]
                                            [K]
                                            [S] {endOfString}

    6° Step
                         [C]
    [B]                  [A]                 [D]
    [E]                  [T] {endOfString}   [O]                 [U]
    [E] {endOfString}    [S] {endOfString}   [G] {endOfString}   [C]
                                                [K]
                                                [S] {endOfString}

    Traversal
    • When it comes to traversal, if you go down a character it means that you have used that character.


    Applications
    • Autocomplete: Given a word find the next word in the dictionary.
    • Spell checking: A word can be parallel searched in the ternary search tree to check for correct spelling.
 */

int main()
{
    Node *root = NULL;

    insert(&root, "cat");
    insert(&root, "cats");
    insert(&root, "up");
    insert(&root, "bug");

    printf("Following is traversal of ternary search tree\n");
    traverseTST(root);

    printf("\nFollowing are search results for cats, bu and cat respectively\n");
    searchTST(root, "cats") ? printf("Found\n") : printf("Not Found\n");
    searchTST(root, "bu") ? printf("Found\n") : printf("Not Found\n");
    searchTST(root, "cat") ? printf("Found\n") : printf("Not Found\n");

    return 0;
}
