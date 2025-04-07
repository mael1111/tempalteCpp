#include <stdio.h>
int main(){
  int a;
  printf("a =");
  scanf("%d", a);

  if(a >= 70){
    printf("Selat Anda lulus\n", a);
  }
  else{
    printf("Maaf Anda tidak lulus\n", a);
  }

  return 0;
}