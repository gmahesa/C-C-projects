#include<stdio.h>

int main()
{
    char a[20];
    printf("masukan satu kata : ");
    gets(a);
    
    if(a[0]>=65&&a[0]<=90)
	{
       	for(int i=0;i<20;i++)
		{
			i+=1;
		    a[i]=a[i]+32;	
		}
   	   	   
    }
    else if(a[0]>=97&&a[0]<=122)
    {
    	for(int i=0;i<20;i++)
		{
			i+=1;
		    a[i]=a[i]-32;	
		}
           
    }
   
    printf("Hasil: %s\n",a);
    return 0;
}