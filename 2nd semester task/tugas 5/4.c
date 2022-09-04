#include <stdio.h>
int fungsiRekursif ();
int main()
{
  int a, batas;
  batas = 1000;
  a = 0;
  a = fungsiRekursif(a, batas);
  printf("%d ", a);
  return (0);
}

int fungsiRekursif (int a, int b) {
  printf("%d ", a);
  if (a<b)
    fungsiRekursif (a+1,b);

  return (a*b);
}//Process returned 0   execution time : 0.107 s