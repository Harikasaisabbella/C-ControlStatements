#include<stdio.h>
void main()
{ int a, b = 1;
  printf("Enter a number: ");
  scanf("%d", &a);
  while(b <= 12)
  {
  	printf("%d * %d = %d\n\n", a, b, a*b);
	  b++;
  }  
}
