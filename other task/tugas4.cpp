#include <stdio.h>

int main()
{
	int i,i2,jumlah_angka;
	
	printf("jumlah deret = ");
	scanf("%d",&jumlah_angka);
	printf("angka awal = ");
	scanf("%d",&i);
	if(jumlah_angka%2==1)
	{
		   	jumlah_angka-=1;
	}
	jumlah_angka/=2;
	printf(" %d ",i);
	while(jumlah_angka>0)
	{
		i2=i+2;
		i+=3;
		printf(" %d ",i);
		printf(" %d ",i2);
		i=i2;
		
		jumlah_angka--;
	}
	return 0;
}