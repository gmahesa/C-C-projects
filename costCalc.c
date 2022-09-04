#include <stdio.h>
main () {
	int ppn, biayappn, biaya, start, end;
	
	printf("jam mulai= ");
	scanf("%d", &start);
	printf("\njam selesai= ");
	scanf("%d", &end);
	
	ppn=0.1;
	
	if (start>=1&&end<=17)
	{
		biaya=(end-start)*60*100;
	}
	else if (start>=18&&end<=24)
	{
		biaya=(end-start)*60*600;
	}
	
	if (start>=1&&start<=24)
	{
		biayappn=biaya+biaya*0.1;
	}
	
	printf("\nmaka biaya= %d", biaya);
	printf("\nbiaya tambah ppn: %d", biayappn);
	return 0;
}