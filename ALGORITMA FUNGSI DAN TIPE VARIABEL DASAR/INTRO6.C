#include <stdio.h>

#define PI 3.13

int main()
{
float jari2 = 10, luas, keliling;

luas = PI * jari2 * jari2;
keliling = 2 * PI * jari2;

printf("Luas keliling bberjari-jari %f adalah %f\n", jari2, luas);
printf("\n Keliling lingkaran adalah %f", keliling);

return 0;

}