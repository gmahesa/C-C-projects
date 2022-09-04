#include <stdio.h>
int main(int argc, char** argv)
{
	char isifile;
	FILE *f;
	f = fopen("tugasz.ksa","r");
	for(int i=0;i<50;i++){
		for(int j=0;j<50;j++){
			fscanf(f,"%c",&isifile);
			printf("%c",isifile);
		}
		printf("\n");
	}
	return 0;
}