#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)
{
	char b[5][100];
	for (int i=0;i<5;i++)
	{
		printf("Masukan nama %d = \t", i);
		scanf("%s", &b[i]);
	}
	
	int j,beda;
	for (int i=0;i<5;i++)
	{
		j=i;
		for (int k=i+1;k<5;k++)
		{
			beda=strcmp(b[j],b[k]);
			if (beda==1)
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
	for (int i=0;i<5;i++)
	{
		printf("%d.\t",i+1 );
		puts(b[i]);
		printf("\n");
	}
	return 0;
}