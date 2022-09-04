#include <stdio.h>

main()
{
	float awal, akhir;
	float minggu1,minggu2,minggu3,minggu4;
	float persen,populasi;
	
	printf("masukkan populasi awal \t= ");
	scanf("%f", &awal);
	
	printf("\nmasukkan populasi akhir minggu sejak di amati pertama \t= ");
	scanf("%f", &akhir);
	
	persen=(akhir-awal)*100/100;
	minggu1=akhir+(akhir*persen/100);
	minggu2=minggu1+(minggu1*persen/100);
	minggu3=minggu2+(minggu2*persen/100);
	minggu4=minggu3+(minggu3*persen/100);
	
	printf("\npersentase pertumbuhan \t= %.2f persen", persen);
	printf("\npopulasi 1 minggu mendatang \t= %.2f", minggu1);
	printf("\npopulasi 2 minggu mendatang \t= %.2f", minggu2);
	printf("\npopulasi 4 minggu mendatang \t= %.2f", minggu4);
	
	
	return 0;
}