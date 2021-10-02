#include<stdio.h>
void main()
{ int i, n, max = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter %d values: ", n);
  while(n>0)
  {
  	scanf("%d", &i);
  	if(i > max)
  	{
  		max = i;
  		printf("max at this point is %d\n", max);
    }
    n--;
  }
  printf("Largest of the given numbers is %d", max);
}
