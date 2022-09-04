#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
//yang belum= perkalian,pembagian,pengurangan
float trigono,hasil;
float phi = 3.14;

int penjumlahan();
int pengurangan();
int perkalian();
int pembagian();
int sinus();
int cosinus();
int tangen();
int pangkat();
int kembali();

int main() 
{
	cobalagi:
    char operasi;
	
    printf("Masukkan Operasi (+, -, *,/,^,t,c,s): ");
    scanf("%c", &operasi);

    switch(operasi)
    {
        case '+':
        	penjumlahan();
		break;
	
		case '-':
			pengurangan();
		break;
	
		case '*':
			perkalian();
		break;	
		
		case '/':
			pembagian();
		break;	
		
		case '^':
			pangkat();
		break;	
		
		case 't':
			tangen();
		break;	
	
		case 's':
			sinus();
		break;		
	
		case 'c':
			cosinus();
		break;	
		
		default:
           printf("Erroru!");
 	    break;
    }
    
    return 0;
}

int kembali()
{
	char balik;
	printf("Mau ngitung lagi? y/t="); 
	scanf(" %c",&balik);
	system("cls");
	switch(balik)
	{
	case 'y':
		main();
		break;
	case 'n':
		printf("terima kasih");
		break;
	}
	return 0;
}

int penjumlahan()
{
	int hasil,angka;
	hasil=0;
	printf("Penjumlahan\n\n");
	printf("Masukkan angka: ");
	
	while(angka!=0)
	{
		scanf("%d",&angka);
		hasil=hasil+angka;
		printf("%d + ",hasil);
	}
	printf("\nHasilnya: %d\n\n",hasil);
	
	return kembali();
}

int pengurangan()
{
	printf("Pengurangan\n\n");
	
	int hasil,angka;
	hasil=0;
	printf("Masukkan angka: ");
	scanf("%d",&angka);
	hasil=angka;
	printf("%d - ",hasil);
	while(angka!=0)
	{
		scanf("%d",&angka);
		hasil=hasil - angka;
		printf("%d - ",hasil);
	}
	printf("\nHasilnya: %d\n\n",hasil);
	
	return kembali();

}

int perkalian()
{
	int angka1,angka2;
	int hasil;
	printf("Perkalian\n\n");
	while(angka[i]) //cari kondisi finish
	{
		printf("Masukkan angka : ");
		scanf("%d",&angka[i]);
		hasil = hasil * angka[i];
		i++;
	}
	printf("\nHasilnya: %d\n\n",hasil);

	return kembali();
}

int pembagian()//rumusnya + kondisi
{
	int angka[100],i=0;
	while(angka[i]==0)
	{
		printf("masukan angka : ");
		scanf("%d", &angka[i]);
		hasil=angka[0];
		hasil=hasil/angka[i];
		i++;
	}
	 
}


int sinus()
{
	printf("SIN\n\n");
	printf("Masukkan angka: ");scanf("%f",&trigono);
	hasil=sin (trigono*phi/180);
	printf("Hasilnya: %.2f\n\n",hasil);
	
	return kembali(); 
}


int tangen()
{
	printf("TAN\n\n");
	printf("Masukkan angka: ");scanf("%f",&trigono);
	hasil=tan (trigono*phi/180);
	printf("Hasilnya: %.2f\n\n",hasil);
	
	return kembali(); 
}

int cosinus()
{
	printf("COS\n\n");
	printf("Masukkan angka: ");scanf("%f",&trigono);
	hasil=cos (trigono*phi/180);
	printf("Hasilnya: %.2f\n\n",hasil);
	
	return kembali(); 
}

int pangkat()
{
	int a,b,hasil;
	printf("Pangkat\n\n");
	printf("Masukkan angka: ");scanf("%d",&a);
	printf("Masukkan nominal pangkat: ");scanf("%d",&b);
	hasil=pow (a,b);
	printf("Hasilnya: %d\n\n",hasil);
	
	return kembali(); 
}