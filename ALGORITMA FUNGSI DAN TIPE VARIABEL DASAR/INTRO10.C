#include <stdio.h>

int main()
{
 float celcius, fahrenheit;

 printf("PROGRAM KONVERSI CELCIUS KE FAHRENHER\n\n");
 printf("Masukkan nilao celcius: ");
 scanf("%f", &celcius);

 fahrenheit = ((celcius * 9) /5) + 32;
 printf("%.2f°C sama dengan %.2f°F\n", celcius, fahrenheit);

return 0;
}