#include <stdio.h>
main (){
	int hari, hari1, bulan, tahun,sisa, sisa1, sisa2;
	
	printf ("masukan hari : ");
	scanf("%d", &hari);
	
	tahun=hari/365;
	sisa1=hari%365;
	bulan=sisa1/30;
	sisa2=bulan%30;
	hari1=hari-(tahun*365)-(bulan*30);
	
	printf("\nmaka tahun %d bulan %d hari %d", tahun, bulan, hari1);
}