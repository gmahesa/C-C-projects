#include <stdio.h>

int main()
{
	int i=1,jum=1;
	do{
		printf(" %d ",jum);
		jum+=i;
		i++;
	}while(jum<=16);
	
	return 0;
}