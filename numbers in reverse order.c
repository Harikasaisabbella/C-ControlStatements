/* C program to print numbers in reverse order */
#include<stdio.h>
void main()
{ int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  while(number >= 1)
  {
  	printf("%d\n", number);
  	number--;
  }
}
