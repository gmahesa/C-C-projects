#include <stdio.h>
#include <string.h>
char kata[1][100], simpan[1][100];
void proses ()
{
	if (strcmp(simpan[0],kata[0])==0)
	{
		printf("benar");
	}
	else
	{
		printf("salah");
	}
}
int main(int argc, char** argv)
{
	printf("masukan kata : "); gets(kata[0]);
	strcpy(simpan[0],kata[0]);
	strrev(simpan[0]);
	proses();	
	return 0;
}