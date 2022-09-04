#include <stdio.h>


	int 	NIM,i=0,sks[10],totalnilai=0,totalsks=0,nilai_angka[10];
	char 	nama[20],matkul[10][20],nilai;
	float	Hasil,IP[10];//rata rata nya

void input()
{
	printf("masukkan nama\t"); 		scanf(" %s",&nama);
	printf("masukkan NIM\t");		scanf("%d",&NIM);
	
	char pilihan;
	for(int j=0;;j++)
	{
		printf("\n%d.\n",j+1);
		printf("Mata kuliah\t = "); 	scanf(" %s",&matkul[j]);
		printf("Jumlah sks\t = ");		scanf(" %d",&sks[j]);
		masukkan:
		printf("nilai\t\t = ");			scanf(" %c",&nilai);
		switch(nilai)
		{
		case 'a':
			nilai_angka[j]=4;
			break;
		case 'A':
			nilai_angka[j]=4;
			break;
		case 'b':
			nilai_angka[j]=3;
			break;
		case 'B':
			nilai_angka[j]=3;
			break;
		case 'c':
			nilai_angka[j]=2;
			break;
		case 'C':
			nilai_angka[j]=2;
			break;
		case 'd':
			nilai_angka[j]=1;
			break;
		case 'D':
			nilai_angka[j]=1;
			break;
		case 'e':
			nilai_angka[j]=0;
			break;
		case 'E':
			nilai_angka[j]=0;
			break;
		default:
			printf("angka yang anda masukkan tidak valid, silahkan masukkan lagi\n");
			goto masukkan;
			break;
		}
		totalnilai+=nilai_angka[j]*sks[j];
		totalsks+=sks[j];
		printf("\nadakah mata kuliah lagi?(y/n)");
		scanf(" %c",&pilihan);
		if(pilihan=='n'||pilihan=='N')
		{
			break;
		}

	}
	
	printf("\ntotal nilai = %d",totalnilai);
	printf("\ntotal sks = %d",totalsks);
	Hasil = totalnilai / totalsks;
	IP[i]=Hasil;
	printf("\n\tIPK nya adalah = %.2f\n",IP[i]);
	i++;
	
	
}

int main()
{	
	printf("===Program penghitung niali IPK===\n");
	input();
	return 0;
}