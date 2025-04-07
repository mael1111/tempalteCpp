#include <stdio.h>
#define PI 3.14

int main()
{
 float r, keliling, luas;

 printf("Masukan jari-jari lingkaran");
 scanf("%f", &r);

 keliling  = 2 * PI * r;
 luas = PI * r * r;
 printf("Keliling lingkaran dengan jari-jari %f adalah = %f\n", r, keliling);
 printf("Luas lingkaran dengan jari-jari %f adalah = %f\n", r, luas);

 return 0;
}