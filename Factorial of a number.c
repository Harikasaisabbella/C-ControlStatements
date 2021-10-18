#include<stdio.h>
void main()
{ int number, i, f;
  i=f=1;
  printf("Enter a number: ");
  scanf("%d", &number);
  while(i <= number <= 20)
  {
  	f = f*i;
  	i++;
  }
  printf("\nThe factorial of %d is : %d", number, f);
}
 
