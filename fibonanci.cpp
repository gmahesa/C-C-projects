#include <stdio.h>
int fibo (int n)
{
	if (n<2)
	{
		return n;
	}
	else
	{
		return (fibo(n-1)+fibo(n-2));
	}
}
int main(int argc, char** argv)
{
	for (int i=0;i<7;i++)
	printf("%d\t",fibo(i));
	return 0;
}
