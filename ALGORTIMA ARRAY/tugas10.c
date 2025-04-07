#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];
    int i, kata = 1, spasi = 0, karakter = 0;

    printf("Masukkan kalimat: ");
    scanf("%[^\n]s", kalimat); 

    for (i = 0; kalimat[i] != '\0'; i++) {
        karakter++;
        if (kalimat[i] == ' ') {
            spasi++;
            if (kalimat[i+1] != ' ' && kalimat[i+1] != '\0') {
                kata++;
            }
        }
    }

    printf("\nJumlah kata: %d\n", kata);
    printf("Jumlah karakter tanpa spasi: %d\n", karakter - spasi);
    printf("Jumlah karakter dengan spasi: %d\n", karakter);

    return 0;
}