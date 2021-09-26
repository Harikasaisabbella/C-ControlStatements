/* C program to print numbers using while loop */
#include<stdio.h>
void main()
{ // Declaring variables
  int number = 1, ul;
  printf("Enter a number: ");
  scanf("%d", &ul);
  while(number <= ul)
  {
  	printf("%d\n", number);
  	number++;
  }
}
