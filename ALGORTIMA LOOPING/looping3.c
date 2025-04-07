#include <stdio.h>
#include <conio.h>

int main() {
    int n, angka, jumlah, total = 0;

    for (n = 1; n <= 5; ++n) {
        printf("Masukkan nilai dasar triangular-%d: ", n);
        scanf("%d", &angka); 
        jumlah = 0;

        for (int i = 1; i <= angka; ++i) {
            jumlah += i;
        }

        total += jumlah;
    }

    printf("Jumlah total dari 5 triangular adalah %d\n", total);
    getch();
    return 0;
}