#include <stdio.h>
#include "Hashtable.h"

int main()
{
    FILE *file = fopen("../crew.txt", "r");

    if (!file)
    {
        printf("ERROR: Couldn't find the file.");
        return -1;
    }

    Hashtable hashtable;

    initialiseHashtable(&hashtable);

    for (int i = 0; i < 7; i++)
    {
        char name[20];
        long companyCode = 0;

        fscanf(file, "%s %ld", name, &companyCode);

        if (!insert(&hashtable, initialiseCrewMember(name, companyCode)))
        {
            printf("ERROR: Hashtable is full.");
        }
    }

    for (int i = 0; i < 7; i++)
    {
        printf("%s %ld\n", hashtable.crewMember[i]->name, hashtable.crewMember[i]->companyCode);
    }

    return 0;
}
