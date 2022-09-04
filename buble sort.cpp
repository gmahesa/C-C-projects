#include <stdio.h>
int main(int argc, char** argv)
{
	int bil[9]={100, 70, 90, 80, 10, 40, 30, 20, 50};
	int temp;
	for (int i=0;i<9;i++)
	{
		printf("%d ",bil[i]);
	}
	for (int i=0;i<8;i++)
	{
		for (int j=9;j>=i+1;j--)
		{
			if (bil[j-1]>bil[j])
			{
				temp=bil[j-1];
				bil[j-1]=bil[j];
				bil[j]=temp;
			}
		}
	}
	printf("urut = \n");
	for (int i=0;i<9;i++)
	{
		printf(" %d ",bil[i]);
	}
	
	return 0;
}