/* C program to print even numbers in reverse order */
#include<stdio.h>
void main()
{ int number;
  printf("Enter a number ");
  scanf("%d", &number);
  while(number >= 2)
  {
  	printf("%d\n", number);
  	number = number-2;
  }
}
