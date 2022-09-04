#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define sizeY 16
#define sizeX 64
// Nilai Konstanta jarakC boleh diubah-ubah
#define jarakC 32

void fungsiRekursif(int baris, int kolom, int jarak);
void tandai(int baris, int kolom, int jarak);

char pohon[sizeY][sizeX];

int main()
{
    int baris, kolom;
    srand(time(0));

    for (baris = 0; baris<16; baris++) {
        for (kolom = 0; kolom<=64; kolom++) {
            pohon[baris][kolom] = ' ';
        }
    }

    kolom = rand()%64;
    fungsiRekursif(15,kolom, jarakC);

    for (baris = 0; baris<16; baris++) {
        for (kolom = 0; kolom<64; kolom++) {
            printf("%c", pohon[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
}

void fungsiRekursif(int baris, int kolom, int jarak) {
	pohon[baris][kolom]='*';
	tandai(baris, kolom-1, jarak);
	tandai(baris, kolom+1, jarak);
	tandai(baris-1, kolom, jarak); 
	tandai(baris+1, kolom, jarak);
}

void tandai(int baris, int kolom, int jarak) {
    int acak = (rand()%(jarak));
    if (pohon[baris][kolom]!='*') {
        if (acak>1) {
            if (kolom <sizeX &&baris <sizeY &&
                kolom >=0 &&baris>=0) {
                    fungsiRekursif(baris, kolom, jarak-1);
            }
        }
    }
}