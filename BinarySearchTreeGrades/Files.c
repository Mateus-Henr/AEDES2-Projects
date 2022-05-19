#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "Tree.h"

#include "Files.h"

#define NULL_TERMINATOR 1
#define FILE_PATH "..//files//"

bool readFileIntoBST(Tree *tree, char *filename)
{
    char filePath[strlen(FILE_PATH) + strlen(filename) + NULL_TERMINATOR];

    strcpy(filePath, FILE_PATH);
    strcat(filePath, filename);

    FILE *pFile = fopen(filePath, "r");

    if (!pFile)
    {
        return false;
    }

    while (!feof(pFile))
    {
        Student *student = (Student *) malloc(sizeof(Student));

        fscanf(pFile, "%s %d %lf", student->name, &student->registration, &student->grade);
        insertInTree(tree, student);
    }

    pFile = NULL;

    return true;
}