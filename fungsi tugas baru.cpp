#include <stdio.h>
int isEven (int a);
int isPositive (int a);
int isPrima (int a);
int main(int argc, char** argv)
{
	int bil;
	printf("Masukan Bilangan : "); scanf("%d", &bil);
	isEven(bil);
	isPositive(bil);
	isPrima (bil);
	return 0;
}
int isEven (int a)
{
	if (a%2==0)
	{
		printf("Bilangan %d = Bilangan Genap\n", a);
		return a;
	}
	else
	{
		return 0;
	}
}
int isPositive (int a)
{
	if (a>=0)
	{
		printf("Bilangan %d = Bilangan positive\n", a);
		return a;
	}
	else
	{
		return 0;
	}
}
int isPrima (int a)
{
	if(a>0&&a!=1&&a/a==1&&a%2!=0||a==2)
	{
		printf("Bilangan %d = Bilangan prima\n", a);
		return a;
	}
	else
	{
		return 0;
	}
}