#include <stdio.h>
int main(int argc, char** argv)
{
	int arr[5],arrjum[5],max,min;
	for(int i=0;i<5;i++)
	{
		printf("masukan tahun ke [%d]: ",i);
		scanf("%d", &arr[i]);
			
		printf("masukan jumlah ke [%d]: ",i);
		scanf("%d", &arrjum[i]);
			
		printf("\n");
	}
	for(int i=0;i<5;i++)
	{
		printf("%d\t%d", arr[i], arrjum[i]);
		printf("\n");
	}
	max=arrjum[1];
	min=arrjum[1];
	for (int i=0;i<5;i++)
	{
		if (arrjum[i]>max)
		{
			max=arrjum[i];
		}
		else
		{
			min=arrjum[i];
		}	
	}
	printf("\ntahun penjualan tertinggi pada tahun : %d", max);
	return 0;
}