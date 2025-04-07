#include <stdio.h>

int main ()
{
  float harga, jumlah, total, hasil;

  harga = 132.055;
  jumlah = 50;

  total = harga * jumlah;
  hasil = total / jumlah;

  printf("harga total = %f\n\n", total);
  printf("harga pembagian = %f\n\n", hasil);

   return 0;

}