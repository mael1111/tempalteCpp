#include <stdio.h>
#include <stdlib.h>

int main()
{
char percent = '%';
int total_discount1 = 700000 - ((700000 * 5) / 100);
int total_discoount2 = 380000 - ((380000 * 10) / 100);
int total_discount3 = 800000 - ((800000 * 8) / 100);

printf("NO\t\t Nama Barang \t\t\t Harga \t\t\t Diskon \t Total\n");
printf("1 \t\t CPU 850Mhz \t\t\t 700.000,00 \t 5%c \t\t %d \n", percent, total_discount1); /*List No. 1*/
printf("2 \t\t RAM 128Mhz \t\t\t 380.000,00 \t 10%c \t\t %d \n", percent, total_discoount2); /*List No. 2*/
printf("3 \t\t Motherboard PIII \t\t 800.000,00 \t 8%c \t\t %d \n", percent, total_discount3); /*List No. 3*/

return 0;
}