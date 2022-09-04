#include<stdio.h>
 
#include<string.h>
 
void create_marks_csv(char *filename,int n,int m){
 
printf("\n Creating %s.csv file",filename);

FILE *fp;
int i,j; 
filename=strcat(filename,".csv");
 
fp=fopen(filename,"w+");
 
fprintf(fp,"Nama; Gaji; Zakat; Gaji bersih\n");
char nama[3][10]={"Ali","sofyan","Kholimi"};
 int gaji[3]={1234567,2345678,3456789},zakat;
for(i=0;i<m;i++){
 
    fprintf(fp,"%s",nama[i]);
	fprintf(fp,";%d",gaji[i]);
	zakat=gaji[i]*25/1000;
	fprintf(fp,";%d",zakat);
	fprintf(fp,";%d\n",gaji[i]-zakat);
    }
 
fclose(fp);
 
printf("\n %sfile created",filename);
 
}
  
int main(){
 
     char str[100];
 
    printf("\n Enter the filename :");
 
    gets(str);
     
create_marks_csv(str,3,3);
 
return 0;
 
}		