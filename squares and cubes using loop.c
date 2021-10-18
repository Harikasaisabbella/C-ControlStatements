#include<stdio.h>
void main()
{ int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  while(a <= b)
  {
  	printf("%d %d %d\n", a, a*a, a*a*a);
  	a++;
  }
}
