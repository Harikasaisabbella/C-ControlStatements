/* C program to print squares using while loop */
#include<stdio.h>
void main()
{ // Declaring variables
  int number = 1, ul;
  printf("Enter a number ");
  scanf("%d", &ul);
  while(number <= ul)
   {
  	printf("%d %d\n",number, number*number);
  	number++;
  }
  
}
