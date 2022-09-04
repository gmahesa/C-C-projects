#include <stdio.h>
main (){
	float penj,hasilpenj, down, totalpenj;
	
	printf("downline = ");
	scanf("%f", &down);
	printf("hasil penjualan= ");
	scanf("%f", &hasilpenj);
	
	if (down>=1&&down<10)
	{
		penj=0.05*hasilpenj;
	}
	else if (down>=10&&down<=50)
	{
		if (hasilpenj<1000000){
			penj=0.1*hasilpenj;
		}
		if (hasilpenj>1000000)
		{
			penj=0.125*hasilpenj;
		}
	}
	else if (down>50)
	{
		penj=0.15*hasilpenj;
	}
	 
 	totalpenj=hasilpenj+penj;
	printf("maka total penjualan: %.2f", totalpenj);
	return 0;
	
}