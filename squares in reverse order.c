/* C program to print squares in reverse order */
#include<stdio.h>
void main()
{ int number = 1;
  printf("Enter a number ");
  scanf("%d", &number);
  while(number >= 1)
   {
  	printf("%d %d\n",number, number*number);
  	number--;
  }
  
}
