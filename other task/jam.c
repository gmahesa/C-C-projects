#include <stdio.h>

main()
{
	int jam, menit, detik;
	
	printf("masukan jam, menit, detik :\n");
	scanf("%d:%d:%d", &jam, &menit, &detik);
		
	if (jam<=24&&jam>=0&&menit<=60&&menit>=0&&detik<=60&&detik>=0)
	{
		printf("valid");
	}
	else
	{
		printf("tidak valid");
	}
	return 0;
}