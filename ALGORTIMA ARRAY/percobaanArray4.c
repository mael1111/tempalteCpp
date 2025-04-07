#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, jml_hr[]={31,28,31,30,31,30,31,31,30,31,30,31};

    puts("Menentukan jumlah hari dalam satu bulan.");
    printf("Ketik Nomor bulan (misal 1-Jan, 2-Feb) = ");
    scanf("%i", &x);
    printf("Jumlah hari = %i", jml_hr[x-1]);

 return 0;
}