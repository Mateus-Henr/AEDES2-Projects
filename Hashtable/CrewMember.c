#include <string.h>
#include <stdlib.h>

#include "CrewMember.h"

CrewMember *initialiseCrewMember(char *name, long companyCode)
{
    CrewMember *crewMember = (CrewMember *) malloc(sizeof(CrewMember));

    strcpy(crewMember->name, name);
    crewMember->companyCode = companyCode;

    return crewMember;
}

int hashCode(CrewMember *crewMember)
{
    int hashCode = 0;

    for (int i = 0; i < strlen(crewMember->name); i++)
    {
        hashCode += ((int) *crewMember->name) * (i + 1);
    }

    return hashCode;
}