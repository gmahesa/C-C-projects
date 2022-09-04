#include <stdio.h>
#include <time.h>

void hari(long int x);
void terbilang(long int x);
void bulan(long int x);

char day[7][15]={"senin","selasa","rabu","kamis","jumat","sabtu","minggu"};
char month[12][15]={"januari","februari","maret","april","mei","juni","juli"
	,"agustus","september","oktober","november","desember"};
char count[11][15]={"satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan","sepuluh","sebelas"};

int main (){	
	struct tm *Sys_T;

	time_t Tval;
	Tval = time(NULL);
	Sys_T = localtime(&Tval);
	
	printf("Hari ini, ");
	hari(Sys_T->tm_wday);
	terbilang(Sys_T->tm_mday);
	bulan(Sys_T->tm_mon);
	terbilang(1900+Sys_T->tm_year);
	printf("Jam ");
	terbilang(Sys_T->tm_hour);
	terbilang(Sys_T->tm_min);
	printf(" Saya, Galang Aji Mahesa, Telah Menyelesaikan Tugas Sepuluh");
}
void hari(long int x){
	
	for(int i=1;i<=7;){
		if(x==i){
			printf("%s, ", &day[i-1]);
			break;
		}
		else
		{
			i++;
		}
	}
}
void terbilang(long int x){
	for(int i=1;i<=11;){
		if(x==i){
			printf("%s ",&count[i-1]);
			break;
		}
		else
		{
			i++;
		}
	}
	if(x>=12&&x<=19){
		terbilang(x%10);
		printf("Belas ");
	}else if(x>=20&&x<=99){
		terbilang(x/10);
	   	printf("Puluh ");
		terbilang(x%10);
	}else if(x>=100&&x<=199){
		printf("Seratus ");
		terbilang(x-100);
	}else if(x>=200&&x<=999){
		terbilang(x/100);
		printf("Ratus ");
		terbilang(x%100);
	}else if(x>=1000&&x<=1999){
		printf("Seribu ");
		terbilang(x-1000);
	}else if(x>=2000&&x<=999999){
		terbilang(x/1000);
		printf("Ribu ");
		terbilang(x%1000);
	}
}
void bulan (long int x){
	for(int i=1;i<=12;){
		if(x+1==i){
			printf("%s ", &month[i-1]);
			break;
		}
		else
		{
			i++;
		}
	}
}