#include <time.h>
#include <stdio.h>
 
int main() {
    struct tm *Sys_T;
 
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval); /* Untuk mendapatkan waktu lokal komputer */
    /* Sys_T = gmtime(&Tval); */ /* Untuk mendapatkan waktu komputer berbasis GMT/UTC */
 
    printf("Day of Month = %d", Sys_T->tm_mday);
    printf("\nMonth        = %d", Sys_T->tm_mon+1); /* Ditambah 1 karena Januari dimulai dari 0 */
    printf("\nYear         = %d", 1900+Sys_T->tm_year); /* Ditambah 1900, karena tahun dimulai dari 1900 */
 
    printf("\n\nHour         = %d", Sys_T->tm_hour);
    printf("\nMinutes      = %d", Sys_T->tm_min);
    printf("\nSeconds      = %d", Sys_T->tm_sec);
 
    printf("\n\nDay of Week  = %d", Sys_T->tm_wday); /* 0-6 melambangkan Minggu-Sabtu */
    printf("\nDay of Year  = %d", Sys_T->tm_yday);
 
    printf ( "\n\nThe current date/time is: %s", asctime (Sys_T));
    /* asctime berfungsi untuk mengubah struct tm menjadi string c dengan format Www Mmm dd hh:mm:ss yyyy */
}