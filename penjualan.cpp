#include <stdio.h>
int main()
{
	int data[5][2];
	for (int i=0;i<5;i++)
	{
		printf("masukan tahun ke %d : ", i);
		scanf("%d", &data[i][0]);
		printf("masukan penjualan tahun ke %d : ", i);
		scanf("%d", &data[i][1]);
	}
	for (int i=0;i<5;i++)
	{
		printf("\n%d\t%d\n", data[i][0], data[i][1]);
	}
	float maxjumlah=data[0][1],maxtahun=data[0][0];
	for (int i=0;i<5;i++)
	{
		
		if (data[i][1]>maxjumlah)
		{
			maxjumlah=data[i][1];
			maxtahun=data[i][0];
		}
	}
	printf("tahun penjualan tretinggi =\t%g", maxtahun);
	
	return 0;
}