#include <stdio.h>
int main(int argc, char** argv)
{
	int arrb [3][2],arra [3][2],arrc [3][2];
	for (int i=0;i<3;i++)
	{
		printf("masukan data ke [%d]: ",i);
		scanf("%d", &arra[i][0]);
			
		printf("masukan data ke [%d]: ",i);
		scanf("%d", &arra[i][1]);
			
		printf("\n");
	}
	printf("matriks A\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d\t", arra[i][j]);
		}
		printf("\n");
	}
	printf("\n");	
	for (int i=0;i<3;i++)
	{
		printf("masukan data ke [%d]: ",i);
		scanf("%d", &arrb[i][0]);
			
		printf("masukan data ke [%d]: ",i);
		scanf("%d", &arrb[i][1]);
			
		printf("\n");
	}
	printf("matriks B\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%d\t", arrb[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("hasil A+B:\n");	
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<2;j++)
		{
			arrc[i][j]=arra[i][j]+arrb[i][j];
			printf("%d\t",arrc[i][j]);
		}printf("\n");
	}	
	return 0;
}