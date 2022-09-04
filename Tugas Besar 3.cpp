#include <stdio.h>
#include <string.h>

int  nim;
char inputnim[30];
char nilaiAik[41]			={'A','B','C','D','A','A','B','C','A','A',
						      'D','C','A','A','A','A','B','C','A','A',
							  'A','B','C','D','A','A','B','D','A','A',
							  'D','C','A','A','A','A','B','C','A','A',};
char nilaiKalkulus[41]		={'A','B','C','D','A','A','B','C','A','A',
						      'D','C','A','A','A','A','B','C','A','A',
							  'A','B','C','D','A','A','B','D','A','A',
							  'D','C','A','A','A','A','B','C','A','A',};
char nilaiProgdas[41]		={'D','C','A','A','A','D','C','A','A','A',
							  'D','C','A','A','A','A','B','C','A','A',
							  'A','B','C','D','A','A','B','D','A','A',
							  'A','B','D','A','A','A','B','D','A','A',};
char nilaiPti[41]			={'A','A','A','A','A','A','A','A','A','A',
							  'A','A','A','A','A','A','A','A','A','A',
							  'A','A','A','A','A','A','A','A','A','A',
							  'A','A','A','A','A','A','A','A','A','A'};
char nilaiOrkom[41]			={'A','A','A','A','A','A','A','A','A','A',
							  'A','A','A','A','A','A','B','A','A','A',
							  'A','A','A','A','A','A','C','A','A','A',
							  'A','A','A','A','A','A','A','A','A','A'};
char nilaiOlahraga[41]		={'A','A','A','A','A','A','A','A','A','A',
 	 	 	 	 	 	 	  'A','A','A','A','A','A','A','A','A','A',
							  'A','A','A','A','A','A','C','A','A','A',
							  'A','A','A','A','A','A','A','A','A','A'};
char nilaiBingRead[41]		={'A','A','A','A','A','A','A','A','A','A',
 	 	 	 	 	 	 	  'A','A','A','A','A','A','D','A','A','A',
							  'A','A','A','A','A','A','A','A','A','A',
							  'A','A','A','A','A','A','A','A','E','A'};
char nilaiBingListen[41]	={'A','A','A','A','A','A','A','B','A','A',
 	 	 	 	 	 	 	  'A','A','A','A','A','A','A','A','A','A',
							  'A','A','A','A','A','A','A','A','A','A',
							  'A','A','A','A','A','A','A','A','A','A'};
char nilaiBingSpeak[41]		={'A','A','A','A','A','A','B','D','A','A',
							  'D','C','A','A','A','A','B','C','A','A',
							  'A','B','D','A','A','A','B','D','A','A',
							  'A','B','C','D','A','A','B','D','A','A'};
char nilaiPkn[41]			={'A','A','A','A','A','A','A','A','A','A',
 	 	 	 	 	 	 	  'A','A','A','A','A','A','A','A','A','A',
							  'A','A','A','A','A','A','A','A','A','A',
							  'A','A','A','A','A','A','A','A','A','A'};
char nama[45][40]={"Chosydio Zindu Permana",
				   "Riksa Adenia",
				   "Muhammad Iqbal Ramadhan",
				   "Silcilia Ayu Astiti",
				   "Cita Tiara Hanni",
				   "Fatahillah Arsyad",
				   "Iqbal Anfasa Pratama",
				   "Ikhlasul Fauziyah",
				   "Amirullah",
				   "Finuriah Eka Wahyunino Putri",
				   "Fajarisma Asfiana Putri",
				   "Muhammad Hasbi Trilaksono",
				   "Razaan Yakub Firmansyah Botutihe",
				   "Raditya Jalu Wiratmono",
				   "Ferin Reviantika",
				   "Hairul Umam Saifulrizal",
				   "Moch Sandy Tsalasa Putra",
				   "Gilang Bagus Dwi Panca",
				   "Fatimah Defina Setit Almadhani",
				   "Halim Razak",
				   "Achmad Fauzi",
				   "Rista Azizah Fauziah",
				   "Syukri Adisakti Dainamanu",
				   "Frengky Prasetyo",
				   "Arindra Kurniawan Hadisurya",
				   "Muniah Nur Fadhilah",
				   "Agus Alfian",
				   "Elsyah Ayuningrum",
				   "Muhammad Hussein",
				   "zain Almadani Nuril Putra",
				   "Rizkhi Dwi Nugroho",
				   "Chita Nauly Harahap",
				   "Riski Setiawan",
				   "Ananda Ayu Dianti",
				   "Dinda Dwi Amanda Sari",
				   "Ahlida Nikmatul Husna",
				   "Galang Aji Mahesa",
				   "Charisma Muhammad Meindra",
				   "Farid Syihab",
				   "Dimas Rizal Reianza"};
char datanim[40][30];

int cari(char input[]);
void data();
void tampil(int index);
int konversi(char a);
void hitung(int i);

int main()
{
	printf("\nDaftar IPK kelas Informatika E");
	data();
	printf("\nmasukkah NIM\t=");	gets(inputnim);
	int index=cari(inputnim);
	tampil(index);
	hitung(index);
}

void data()
{
	nim=163;
	for(int i=0;i<40;i++)
	{
		sprintf(datanim[i] , "201710370311%d",nim);//konversi dari int ke string
		nim++;
	}
	
}

int cari(char input[])
{
	for(int i=0;i<40;i++)
	{
		if(strcmp(input,datanim[i])==0)
		{
			printf("ada");
			return i;
		}
	}
	printf("\nNIM tidak ditemukan");
	main();
	return 0;
}

void tampil(int i)
{
	printf("\n\nNama\t= %s",nama[i]);
	printf("\nNim\t= %s",datanim[i]);
	printf("\n\t\t\tnilai");
	printf("\nKalkulus\t\t  %c",nilaiKalkulus[i]);
	printf("\nPemrogaman Dasar\t  %c",nilaiProgdas[i]);
	printf("\nOrkom\t\t\t  %c",nilaiOrkom[i]);
	printf("\nPti\t\t\t  %c",nilaiPti[i]);
	printf("\nPkn\t\t\t  %c",nilaiPkn[i]);
	printf("\nB. Inggris(reading)\t  %c",nilaiBingRead[i]);
	printf("\nB. Inggris(speaking)\t  %c",nilaiBingSpeak[i]);
	printf("\nB. Inggris(listening)\t  %c",nilaiBingListen[i]);
	printf("\nOlahraga\t\t  %c",nilaiOlahraga[i]);		
	printf("\nAIK\t\t\t  %c",nilaiAik[i]);
}

void hitung(int i)
{
	int total=0,n[10];
	float IP,sks=22;
	char IPK;
	   n[0]=konversi(nilaiKalkulus[i])*2;
	   n[1]=konversi(nilaiProgdas[i])*4;
	   n[2]=konversi(nilaiPti[i])*2;
	   n[3]=konversi(nilaiOrkom[i])*3;
	   n[4]=konversi(nilaiOlahraga[i])*2;
	   n[5]=konversi(nilaiBingRead[i])*2;
	   n[6]=konversi(nilaiBingListen[i])*2;
	   n[7]=konversi(nilaiBingSpeak[i])*2;
	   n[8]=konversi(nilaiPkn[i])*2;
	   n[9]=konversi(nilaiAik[i]*1);
	   
	   for(int i=0;i<10;i++)
	   {
	   		total+=n[i];
	   }
	   	IP=total/sks;
	   	printf("\n\ntotal\t=%d\nsks\t=22\nIP\t=%.2f",total,IP);
	   	if(IP==4)
	   		IPK='A';
	   	else if(IP>=3)
	   		IPK='B';
	   	else if(IP>=2)
	   		IPK='C';
	   	else if(IP>=1)
	   		IPK='D';
	   	else
		   IPK='E';
	   printf(" %c",IPK);
}

int konversi(char a)
{
	   switch(a)
	   {
	   case 'A':
		   return 4;
		   break;
	   case 'B':
	   		return 3;
	   		break;
	   	case 'C':
	   		return 2;
	   		break;
	   	case 'D':
	   		return 1;
	   		break;
	   	case 'E':
	   		return 0;
	   		break;
	   }	
	   return 0;
}