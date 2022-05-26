#include <stdbool.h>

// A node of ternary search tree
typedef struct Node
{
    char data;
    unsigned isEndOfString: true; // True if this character is last character of one of the words.
    struct Node *left, *eq, *right;
} Node;

void insert(Node **root, char *word);

int searchTST(Node *root, char *word);

void traverseTST(Node *root);