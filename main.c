#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float a;
  int b,c;
  printf("b? ");
  scanf("%d", &b);
  printf("c? ");
  scanf("%d", &c);
  a = (float)b/c;
  printf("a = %.1f\n", a);
  system("PAUSE");	
  return 0;
}
