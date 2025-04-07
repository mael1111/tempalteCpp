#include <stdio.h>
#include <string.h>

struct elektro{
    int ti;
    int elektronika;
    int listrik;
};
struct sipil{
    int rawa;
    int bangunan;
};
struct akutansi{
    int syariah;
    int akutansi;
};
struct poliban{
    struct elektro jumlah1;
    struct sipil jumlah2;
    struct akutansi jumlah3;
    int mesin;
    int bisnis;
};

int main()
{
    struct poliban jumlah;

    printf("Jumlah mahasiswa Poliban-Elektro-TI = %d\n", jumlah.jumlah1.ti = 11); 
    printf("Jumlah mahasiswa Poliban-Elektro-Elektronika = %d\n", jumlah.jumlah1.elektronika = 12);
    printf("Jumlah mahasiswa Poliban-Elektro-Listrik = %d\n", jumlah.jumlah1.listrik = 22); 
    printf("Jumlah mahasiswa Poliban-Mesin = %d\n", jumlah.mesin =21); 
    printf("Jumlah mahasiswa Poliban-Sipil-Rawa = %d\n", jumlah.jumlah2.rawa = 32); 
    printf("Jumlah mahasiswa Poliban-Sipil-Bangunan = %d\n", jumlah.jumlah2.bangunan = 22);
    printf("Jumlah mahasiswa Poliban-Akutansi-Syariah = %d\n", jumlah.jumlah3.syariah = 11); 
    printf("Jumlah mahasiswa Poliban-Akutansi-Akutansi = %d\n", jumlah.jumlah3.akutansi = 12);
    printf("Jumlah mahasiswa Poliban-Bisnis = %d\n", jumlah.bisnis = 22); 

    return 0;
}
