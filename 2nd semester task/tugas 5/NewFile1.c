#include <stdio.h>
void fungsiRekursif();
int main()
{
	int a, batas = 100000;
	a=0;
	while(a<batas)
	{
		fungsiRekursif(a);
	}
  return (0);
}

void fungsiRekursif (int a) {
  printf("%d ", a);
  fungsiRekursif (a+1);
}