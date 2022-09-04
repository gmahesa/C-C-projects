#include <stdio.h>

main () 
{
	int desimal;
	int bin[1000];
	int o;
	int c=1;
	int a;

	printf("program konversi desimal ke biner, heksa, oktal\n");
	printf("**************************************************************\n");
	printf("\ninput nilai desimal : ");
	scanf("%d", &desimal);
	o=desimal;
	
	while(o>0){
		bin[c++]=o%2;
		o=o/2;	
	}
		
	printf("\njika dikonversi ke biner = ");
	
	for(a=c-1;a>0;a--)
		printf("%d", bin[a]);
	
	printf("\n");
	
	printf("\n\t= %X jika di konversi heksa",desimal);
	
	printf("\n");
	
	printf("\n\t= %o jika di konversi ke oktal",desimal);
	
	printf("\n");
	
	return 0;
}
