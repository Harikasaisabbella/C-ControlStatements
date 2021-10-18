#include<stdio.h>
void main()
{  int n, count = 0;
   printf("Enter a number: ");
   scanf("%d", &n);
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
    count++;
}
   printf("\nNumber of steps : %d", count); 
   

}
