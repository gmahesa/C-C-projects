#include <stdio.h>

main ()
{
	int jarak, harga1;
	
	printf("masukan jarak :");
	scanf("%d", &jarak);
	
	if (jarak==1)
	{
		harga1=4500;
	}
	else if (jarak>1)
	{
		harga1=4500+((jarak-1)*2000);
	}
	
	printf("harga sesuai jarak = %d", harga1);
	return 0;
 
}