#include <stdio.h>

int main()
{
 int jam, menit, totalmenit;
 printf("Masukkann jam, menit, totalmenit =");
 scanf("%d %d", &jam, &menit);

 totalmenit = (jam * 60) + menit;
 printf("Jam %d : %d adalah setara dengan %d menit \n", jam, menit, totalmenit);

 return 0;
} 