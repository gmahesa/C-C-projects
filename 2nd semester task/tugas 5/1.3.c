#include <stdio.h>


int main()
{
  fungsiRekursif(0);

  return (0);
}

void fungsiRekursif (int a) {
  printf("%d ", a);
  fungsiRekursif (a+1);
}/*Process returned -1073741571   execution time : 8.962 s
Press any key to continue.*/