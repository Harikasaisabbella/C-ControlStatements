#include<stdio.h>
void main()
{
	int n, count = 0;
	scanf("%d", &n);
	while(n)
    {
    	count++;
		n = n/10;
	}
	printf("%d ", count);
	
}
