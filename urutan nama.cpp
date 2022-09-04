#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	int a;
	printf("masukan jumlah data : ");
	scanf("%i", &a);
	char b[a][100];
	for (int i=0;i<a;i++)
	{
		printf("Masukan nama %d = \t", i);
		scanf("%s", &b[i]);
	}
	
	int j,bd;
	for (int i=0;i<a;i++)
	{
		j=i;
		for (int k=i+1;k<a;k++)
		{
			bd=strcmp(b[j],b[k]);
			if (bd==1)
				j=k;
		}
		if (j!=i)
		{
			char temp[1][30];
			strcpy(temp[0],b[j]);
			strcpy(b[j],b[i]);
			strcpy(b[i],temp[0]);
		}
	}
	for (int i=0;i<a;i++)
	{
		printf("%d.\t",i+1 );
		puts(b[i]);
		printf("\n");
	}
	return 0;
}