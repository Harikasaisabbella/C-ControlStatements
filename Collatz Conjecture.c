#include<stdio.h>
void main()
{  int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   printf("%d ", n);
   while(n > 1)
   {
   	 if(n%2 == 0)
   	 {  n = n / 2;
   	    printf("%d ", n);
		}
	 else
	 {  n = n * 3 + 1;
	    printf("%d ", n);
	 }
	 
   }
   
}
