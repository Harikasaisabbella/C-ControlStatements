#include<stdio.h>
void main()
{ int a, b;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
  while(a <= b)
  {
  	if(a%2==1)
  	{
  		printf("%d ", a);
    }
    a++;
  }
}
