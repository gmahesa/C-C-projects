#include <stdio.h>

main(){
	float pemakaian,biaya;
	
	printf("masukkan jumlah pemakaian dalam satuan MB \t: ");
	scanf("%f", &pemakaian);
	if (pemakaian>0)
	{
		if (pemakaian>0&&pemakaian<501)
		{
			biaya=pemakaian*1024*0.5;
		}
		else if (pemakaian>500)
		{
			biaya=pemakaian*1024*0.75;
		}
	}
	if (pemakaian>=1024)
	{
		printf("\nselamat! anda mendapat bonus 25MB");
	}
	printf("\nmaka total biaya pemakaian = Rp. %.2f", biaya);
	return 0;
}