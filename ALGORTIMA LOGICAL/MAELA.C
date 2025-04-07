#include <stdio.h>

int main() 
{
    int a, b, c, d, e;

    printf("Masukkan nilai a: "); scanf("%d", &a);
    printf("Masukkan nilai b: "); scanf("%d", &b);
    printf("Masukkan nilai c: "); scanf("%d", &c);
    printf("Masukkan nilai d: "); scanf("%d", &d);

   a = (a > b) && (c < d) || (a == b);
   b = (a == b) || (c == d) && (a < b);
   c=  (a <= c) && (b >= d) || (a == d);
   d = (a >= d) || (b <= c) && (c == d);
   e = (a != b) || (c > d) || (a != d);

printf("\n Hasil dari (a>b) && (c<d) || (a==b) = %d\n", a);

printf("\n Hasil dari (a==b) || (c==d) && (a<b) = %d\n", b);

printf("\n Hasil dari (a<=c) && (b>=d) || (a<d) = %d\n", c);

printf("\n Hasil dari (a>=d) || (b<=c) && (c==d) = %d\n", d);

printf("\n Hasil dari (a!=b) || (c>d) || (a!=d) = %d\n", e);

 return 0;   
}