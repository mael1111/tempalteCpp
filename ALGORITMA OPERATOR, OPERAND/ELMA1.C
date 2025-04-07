#include <stdio.h>

int main()
{
  float C = 5/9;
  float F = -32;

  printf("PROGRAM KONVERSI FAHRENHEIT HE CELCIUS\n\n");
  printf("Masukkan derajat fahrenheit = 212");

  scanf("%f", &F);

  C = ((F * 5) / 9 )-32;
  printf("%.2f°C sama dengan %.2f°F\n", C, F);

return 0;
}