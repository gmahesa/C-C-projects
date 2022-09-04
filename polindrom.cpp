#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char kata[1][100],rev[1][100];
	
	printf("masukan kata : ");
	gets(kata[0]);
	printf("\n");
	strcpy(rev[0],kata[0]);
	strrev(rev[0]);
	if(strcmp(rev[0],kata[0])==0)
	{
		printf("%s\t=\tpolindrom",kata[0]);
		printf("\nkata dibalik=%s",rev[0]);
	}
	else 
	{
		printf("%s\t=\ttidak polindrom\n", kata[0]);
		printf("\nkata dibalik=%s",rev[0]);
	}
	return 0;
}