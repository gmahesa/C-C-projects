#include <stdio.h>

int main () {
   FILE *fp;
   char str[1024];

   /* opening file for reading */
   fp = fopen("tugas8.ksa" , "r");
   if(fp == NULL) {
      perror("Error opening file");
      return(-1);
   }
   while( fgets (str, 62, fp)!=NULL) {
      /* writing content to stdout */
      printf(str);
   }
   fclose(fp);
   
   return(0);
}