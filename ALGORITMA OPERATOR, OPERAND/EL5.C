#include <stdio.h>

int main()
{
 float p1 = 123.45679, p2;
 int b1, b2 = -150;

 b1 = p1; /* konversi pecahan ke bulat */
 printf ("%f disimpan ke int menghasilkan %d", p1, b1);
 
 p1 = b2; /* konversi bukat ke pecahan */
 printf("%d disimpan ke float menghasilkan %f\n\n", b2, p1);
 
 p1 = b2 / 100; /* bulat dibagi bulatn*/
 printf("%d dibagi 100 menghasilkan %f\n\n", b2, p1);

 p2 = b2 / 100; /* bulat dibagi pecahan */
 printf("%d dibagi 100 menghasilkan %f\n\n", b2, p2);


 return 0;
}