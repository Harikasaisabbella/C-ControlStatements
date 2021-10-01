#include<stdio.h>
void main()
{ int n, i = 1, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(i <= n/2)
  {
  	if(n%i == 0)
  	{
  		sum += i;
    }
    i++;
  }
    if(sum == n && n > 0)
    {
    	printf("%d is PERFECT NUMBER", n);
	}
	else
	{
		printf("%d is NOT PERFECT NUMBER", n);
	}
  
}
