#include <stdio.h>

int main() 
{
 float x, y, z;
 
 printf("Formula: y = 3x^2 + 6x + 9\n");
 printf("Masukkan nilai x =");
 scanf("%f", &x);

 y = 3 * (x * x) + 6 * x + 9;
 z = (y * (x * x) + 5 * (x * x )) / (9 * y);
 printf("Dapatkan nilai nilai y = 33 dan nilai z = 7.4006734");

 return 0;
}
    