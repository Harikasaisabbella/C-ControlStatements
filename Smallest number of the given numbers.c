#include<stdio.h>
void main()
{ int i, n, min = 100000;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter %d values: ", n);
  while(n>0)
  {
  	scanf("%d", &i);
  	if(i < min)
  	{
  		min = i;
  		printf("min at this point is %d\n", min);
    }
    n--;
  }
  printf("Smallest of the given numbers is %d", min);
}
