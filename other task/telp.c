#include <stdio.h>

main (){
	float waktu, biaya;
	
	printf("masukan waktu lama pemakaian dalam satuan menit : ");
	scanf("%f", &waktu);
	
	if(waktu==1)
	{
		biaya=60*15;
	}
	else if(waktu<=25&&waktu>1)
	{
		biaya=(60*15)+((waktu-1)*60*1.5);
	}
	else if(waktu>25)
	{
		biaya=(60*15)+(24*60*1.5)+((waktu-25)*60*3);
	}
	printf("\nmaka biaya percakapan \t= %.2f", biaya);
	return 0;
	}