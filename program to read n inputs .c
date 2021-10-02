/* C program to read n inputs from user */
#include<stdio.h>
void main()
{ int i, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(n>0)
  {
  	scanf("%d", &i);
  	printf("%d ", i);
  	n--;
  }
}
