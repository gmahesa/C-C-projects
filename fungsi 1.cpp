#include <stdio.h>
int array[5]={10,20,30,40,50};
void pertama ()
{
	for(int i=0;i<5;i++)
	{
		printf("%d ",array[i]);
	}
}
void kedua(){
	for(int i=0;i<3;i++)
	{
		printf("%d ", array[i]);
	}
}
int ketiga(int idx)
{
	printf("%d",array[idx]);
	return array[idx];
}
void keempat ()
{
	
	int max,min;
	max=array[1];
	min=array[1];
	for (int i=0;i<5;i++)
	{
		if (array[i]>max)
		{
			max=array[i];
		}
		if (array[i]<max)
		{
			min=array[i];
		}	
	}
	printf("\nblangan terbesar : %d", max);
	printf("\nblangan terkecil : %d", min);

}
int main(int argc, char** argv)
{
	pertama();
	printf("\n");
	kedua();
	printf("\n");
	printf("nilai element ke 5 : %d", array[4]);
	keempat();	
	return 0;
}

