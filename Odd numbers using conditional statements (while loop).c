#include<stdio.h>
void main()
{ int a, b;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
  if(a%2==0) 
  {
  	a++;
  }
  while(a <= b)
  {
  	printf("%d ", a);
  	a= a+2;
  }
}
