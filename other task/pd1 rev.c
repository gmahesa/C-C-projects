#include <stdio.h>
main(){
	int harga_x,harga_y, harga_t, x=15000, y=5000;
	printf("jumlah pembelian deterjen x \t= 2");
	printf("\njumlah pembelian sabun y \t= 3");
	harga_x=x+(x-(10/100)*x);
	harga_y=y+(y-(10/100)*y)+(y-(30/100)*y);
	harga_t=(harga_x-1500)+(harga_y-2000);
	printf("\nharga total \t= %d", harga_t);
	return 0;}