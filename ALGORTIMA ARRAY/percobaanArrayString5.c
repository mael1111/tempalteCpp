#include <stdio.h>
#include <stdlib.h>

int main(){
    char vocal[]={'A','E','I','O','U'};
    char nama[10];
    int i;

    puts("Ini adalah huruf vocal/hidup");
    for(i=0; i<sizeof(vocal); i++)
    printf("%c", vocal[i]);

    printf("\nMasukkan Nama Anda tanpa Spasi = ");
    gets(nama);
    printf("selamat datang = %s", nama);

 return 0;
}