#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a, c, *b;
  a = 10;
  printf("%d %p\n", a, &a);
  b = &a;
  *b=5;
  printf("%d %p\n", a, &a);
  printf("%d %p %p\n", *b, b, &b);
  // ƒобавить код дл€ работы с переменной с черз указатель b
  // ћожно ли продолжать работать с a
  // scanf должен задавать значение c
  b = &c;
  a = 5;
  *b = 10;
  printf("%d\n %d\n %d\n", a, *b, c);
  scanf("%d", b);
  printf("%d\n %d\n %d\n", a, *b, c);
  system("PAUSE");	
  return 0;
}
