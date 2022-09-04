#include <stdio.h>

main (){
	
	
	int deterjen, sabun;
	int harga_x, harga_y, harga_t;
	int x, y;
	
	printf("jumlah pembelian\n");
	
	printf("\njumlah pembelian deterjen\t= ");
	scanf("%d", &deterjen);
	
	printf("\njumlah pembelian sabun\t= ");
	scanf("%d", &sabun);
	
	x=15000;
	y=5000;
	

	if (deterjen<4&&sabun<4)
	{
		if (deterjen==3)//deterjennnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn 
		{
			harga_x=x+(x-0.1*x)+(x-0.3*x);
		}	
		else if(deterjen==2)
		{
			harga_x=x+(x-0.1*x);
		}	
		else if(deterjen==1)
		{
			harga_x=x;
		}	
		
		if (sabun==3)//sabunnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn
		{
			harga_y=y+(y-0.1*y)+(y-0.3*y);
		}
		else if(sabun==2)
		{
			harga_y=y+(y-0.1*y);
		}
		else if(sabun==1)
		{
			harga_y=y; 
		}  	

		
	}
	
	if(deterjen<=0||deterjen>3)
	{
		harga_x=0;
	}
	
	if(sabun<=0||sabun>3)
	{
		harga_y=0;
	}
	
	if(deterjen>3||sabun>3)
	{
		printf("\nmaks pembelian tiap barang adalah 3, \njika ada barang yang melebihi maka tidak dianggap pembelian dan tidak sah !\n");
	}

	harga_t=harga_x+harga_y;
	
	printf("\nmaka harga deterjen \t= %d", harga_x);
	printf("\nmaka harga sabun \t= %d", harga_y);
	printf("\nharga total yang perlu di bayar \t= %d\n", harga_t);
	
	return 0;
	
	
		
}