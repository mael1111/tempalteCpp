#include <stdio.h>

int main()
{
  int a, b, c, d, x, y, maksimum;

  printf("Masukkan nilai a = "); scanf("%d", &a);
  
  printf("Masukkan nilai b = "); scanf("%d", &b);
  
  printf("Masukkan nilai c = "); scanf("%d", &c);
  
  printf("Masukkan nilai d = "); scanf("%d", &d);
  
  x = (a > b) ? a:b;
  y = (c < d) ? d:c;
  maksimum = (x > y) ? x:y;

  printf("Nilai a lebih besar dari b adalah %d\n", (a>b));
  
  printf("Nilai c lebih kecil dari d adalah %d\n", (c<d));
  
  printf("Jadi nilai maksimun adalah %d\n", maksimum);

  return 0;
}