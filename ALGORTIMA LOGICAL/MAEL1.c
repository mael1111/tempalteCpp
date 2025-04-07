#include <stdio.h>

int main()
{
  int y, x;

  printf("Masukkan nilai x = "); scanf("%d", &x);
  printf("Masukkan nilai y = "); scanf("%d", &y);
  printf("\n Nilai %d > %d adalah %d\n", x,  y, x < y);
  printf("\n Nilai %d < %d adalah %d\n", x,  y, x > y);
  printf("\n Nilai %d == %d adalah %d\n", x,  y, x == y);
  printf("\n Nilai %d <= %d adalah %d\n", x,  y, x <= y);
  printf("\n Nilai %d >= %d adalah %d\n", x,  y, x >= y);
  printf("\n Nilai %d != %d adalah %d\n", x,  y, x != y);

 return 0;
}