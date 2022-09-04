#include <stdio.h>

int main()
{
  int a, batas;
  batas = 1000;
  a=0;
  fungsiRekursif(a, batas);

  return (0);
}

void fungsiRekursif (int a, int b) {
  printf("%d ", a);
  if (a<b)
    fungsiRekursif (a+1, b);
}//Process returned 0   execution time : 0.104 s