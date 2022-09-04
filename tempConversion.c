#include <stdio.h>

void prin ()
{
	char asal;
	char tujuan;
	printf ("\nmasukan satuan asal = ");
	scanf ("%c", &asal);
	printf ("\nmasukan satuan tujuan = ");
	scanf ("%c", &tujuan);
}
main()
{
	float suhu, hasil;
	char asal,tujuan;
	
	printf("masukkan suhu sumber = ");
	scanf("%f", &suhu);
	printf("\nmasukkan satuan tujuan = ");
	scanf("%c", &tujuan);
	printf("\nmasukkan satuan asal = ");
	scanf("%c", &asal);
	prin ();
	if (asal=='c')
	{
		if (tujuan=='f')
		{
			hasil=suhu/5*9;
		}
		else if (tujuan=='r')
		{
			hasil=suhu/5*4;
		}
	}
	
	if (asal=='f')
	{
		if (tujuan=='c')
		{
			hasil=suhu/9*5;
		}
		else if (tujuan=='r')
		{
			hasil=suhu/9*4;
		}
	}
	
	if (asal=='r')
	{
		if (tujuan=='c')
		{
			hasil=suhu/4*5;
		}
		else if (tujuan=='f')
		{
			hasil=suhu/4*9;
		}
	}
	
	printf("hasil konversi suhu %.2f %c = %.2f %c", suhu, asal, hasil, tujuan);
	return 0;
}