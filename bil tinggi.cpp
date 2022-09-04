#include <stdio.h>
int main(int argc, char** argv)
{
	int  arrjum[100];
	int bil,max,min;
	printf("masukan jumlah bilangan : "); 
	scanf("%d",&bil);

	for(int i=0;i<bil;i++)
	{
		printf("masukan jumlah ke [%d]: ",i);
		scanf("%d", &arrjum[i]);
			
		printf("\n");
	}
	for(int i=0;i<bil;i++)
	{
		printf("\t%d", arrjum[i]);
		printf("\n");
	}
	max=arrjum[1];
	min=arrjum[1];
	for (int i=0;i<bil;i++)
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
	printf("\nblangan tertinggi : %d", max);
	return 0;
}