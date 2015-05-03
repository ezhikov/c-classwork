#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, sum = 0, n;
  /*for(i=0; i < 10; i++) {
    if(i==5) return 0;
    printf("%d\n", i);    
  }*/
  
  /* Вычислить сумму чисел от 1 до n */
  scanf("%d", &n);
  for(i = 1; i <= n; i++) sum +=i;
  printf("%d\n", sum);
  
  system("PAUSE");
  main();
  return 0;
}
