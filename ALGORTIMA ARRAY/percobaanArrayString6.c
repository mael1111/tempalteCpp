#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nama[10];
    int i;

    printf("Masukkan Nama Anda = ");
    gets(nama);
    printf("Selamat Datang ");
    puts(nama);

    printf("Nama anda dengan spasi = ");
    for(i=0; i<10; i++)
    printf("%c", nama[i]);

    printf("\nNama anda dibalik = ");
    for (i=9; i>=0; i--)
    printf("%c", nama[i]);

    return 0;
}