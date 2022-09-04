#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define tinggiArena 10
#define lebarArena 10
#define jumlahBom 50

int buatArena();
int cetakArena();
int bukaArena(int y, int x, bool pertama);

char arena[tinggiArena][lebarArena];

int main()
{
    int input[2];
    srand(time(0));

    buatArena();
    cetakArena();

    printf("Masukkan Koordinat (x<spasi>y): ");
    scanf("%d %d", &input[0], &input[1]);
    printf("\n");

    bukaArena(input[1], input[0], true);
    cetakArena();

    return 0;
}

int buatArena() {
    int posX, posY, i, j;

    for (i=0; i<tinggiArena; i++){
        for (j=0; j<lebarArena; j++){
            arena[i][j] = ' ';
        }
    }
    for (i=0;i<jumlahBom;i++){
        posX = rand()%lebarArena;
        posY = rand()%tinggiArena;
        arena[posX][posY] = '*';
    }

    return(0);
}

int cetakArena() {
    int i, j;

	printf("  ");
    for (j=0; j<lebarArena; j++){
    	printf("%d ", j%10);        }
    printf("\n");

    for (i=0; i<tinggiArena; i++){
        printf("%d ", i%10);
		for (j=0; j<lebarArena; j++){
			printf("%c ", arena[i][j]);
		}
        printf("\n");
    }
    printf("\n");

    return(0);
}


int bukaArena(int y, int x, bool pertama) {
	printf("Koodinat: %d %d\n", y, x);
	if(arena[y][x]==' '){
		arena[y][x]='v';
		bukaArena(y-1,x, true);
	   	bukaArena(y+1,x, true);
	   	bukaArena(y,x-1, true); 
	   	bukaArena(y,x+1, true);
	}
	else
	{
		bukaArena(y-1,x, true);
	   	bukaArena(y+1,x, true);
	   	bukaArena(y,x-1, true); 
	   	bukaArena(y,x+1, true);
	}
	return(0);
}