#include<stdio.h>
void main()
{ long long number, i = 1, f = 1;
  printf("Enter a number: ");
  scanf("%lld", &number);
  while(i <= number)
  {
  	f = f*i;
  	i++;
  }
	  printf("The factorial of %lld is : %lld", number,  f);
}
