#include <stdio.h>
#include <string.h>
int main()
{
	double notel[100];
	int a;
	char nama[100][50];
		
	printf("masukan banyak data yg akan diinput: ");
	scanf("%d", &a);
	for(int i=0;i<a;i++)
	{
		printf("masukan nama %d : ",i); fflush(stdin);
		gets(nama[i]);
		printf("masukan nomor telepon %d= ",i);
		scanf("%lf", &notel[i]);
		printf("\n");
	}
	for(int i=0;i<a;i++)
	{
		printf("Nama \t\t%d\t: ",i);
		puts(nama[i]);
		printf("nomor telepon	%d\t: %.0lf\n",i, notel[i]);
		printf("\n");
	}return 0;
}