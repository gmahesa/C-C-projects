#include <stdio.h>
#include <string.h>
void forinput ();
void forbanding ();

	char arrNama[4][30];
	char terpanjang[30];
	char terpendek[30];
	
int main()
{
	forinput();
	forbanding();
	printf("String terpanjang adalah : %s\n",terpanjang);
	printf("String terpendek adalah : %s\n",terpendek);
	return 0;
} 

void forinput ()
{
	for(int i=0; i<4; i++)
	{
		printf("Masukan Nama >> ");
		gets(arrNama[i]);
	}
	for(int i=0; i<strlen(arrNama[0]); i++)
	{
		terpendek[i] = arrNama[0][i];
		terpanjang[i] = arrNama[0][i];
	}
}

void forbanding ()
{
	for(int i=0; i<4; i++)
	{
		if(strlen(terpanjang) < strlen(arrNama[i]))
		{
			for(int j=0; j<30; j++)
			{
				terpanjang[j] = arrNama[i][j];
			}
		}
		if(strlen(terpendek) > strlen(arrNama[i]))
		{
			for(int j=0; j<30; j++)
			{
				terpendek[j] = arrNama[i][j];
			}
		}
	}
}
