#include <stdio.h>
#include <stdlib.h>
#define maks 5

int main(){

    int a[maks],  i, total=0, rata;
    //inpu data
    for(i=0; i<maks; i++){
        printf("Masukkan tinggi siswa %i = ", i+1); scanf("%i", &a[i]);
    }
    //proses hitung data
    for(i=0; i<maks; i++){
        total=total+a[i];
    }
    rata=total/maks;
    printf("Dari 5 siswa, total tinggi = %i\n", total);
    printf("Rata-rata tinggi = %i", rata);

 return 0;
}