#include <stdio.h>

int main()
{
    int a, b, c, d, hasil;

    printf("\n masukkan nilai a, b =");
    scanf("%d %d", &a, &b);
    printf("\n masukan nilai c, d=");
    scanf("%d %d ", &c, &d);
    printf("a = %d, b = %d, c = %d, d = %d", a, b, c, d);

    hasil= a - b;
    printf("\n hasil dari a - b adalah %d\n", hasil);

    hasil= c + d;
    printf("\n hasil dari C + d adalah %d\n", hasil);

    hasil= b * c;
    printf("\n hasil dari b * c adalah %d\n", hasil);

    hasil= a + b * c;
    printf("\n hasil dari a + b * c adalah %d\n", hasil);

    hasil= a * b + c * d;
    printf("\n hasil dari a * b + c * d");

    return 0;
}