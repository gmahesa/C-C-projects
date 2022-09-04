#include <stdio.h>

int main()
{
	int i,jumlah=0;
	printf("masukkan angka random sampai angka 0 untuk berhenti");
	while(i!=0)
	{
		printf("\nmasukkan nilai = ");
		scanf("%d",&i);
		jumlah+=i;
		printf("\n\t\tjumlah = %d\n",jumlah);
	}
	printf("selesai");
	return 0;
}