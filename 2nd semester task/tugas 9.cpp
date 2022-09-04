#include <stdio.h>
int main(int argc, char** argv)
{
	FILE *tugas;
	tugas=fopen("tugas09.ksa","r");
	char isi[200];
	while(!feof(tugas))
	{
		fgets(isi, 200, tugas);
		printf("%s",isi);
	}
	fclose(tugas);
	return 0;
}

//tidak selesai