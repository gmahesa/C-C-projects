#include <stdio.h>
#include <string.h>
int findPos(char a[100],char b[5])
{
	strlen(a);
	for (int i=0;i<strlen(a);i++)
	{
		for(int j=0;j<5;j++)
		{
			if (a[i]==b[j])
			{
				printf("index ke %d\n",i);
			}
		}
	}
	return 0;
}
int main(int argc, char** argv)
{
	char cek[5]={'a','i','u','e','o'};
	char kalimat[100];
	printf("masukan kalimat : ");
	gets(kalimat);
	findPos(kalimat,cek);
	return 0;
}