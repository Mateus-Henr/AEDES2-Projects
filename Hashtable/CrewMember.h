typedef struct
{
    char name[20];
    long companyCode;
} CrewMember;

CrewMember *initialiseCrewMember(char *name, long companyCode);

int hashCode(CrewMember *crewMember);