#include<stdio.h>
void main()
{ int a, b;
  printf("Enter two numbers\n");
  scanf("%d%d", &a, &b);
  while(a<=b)
  {
  	if(a%3!=0)
  	{
  		printf("%d ", a);
	  }
	else
	{
		printf("X ");
	}
	 a++;
  }
}
