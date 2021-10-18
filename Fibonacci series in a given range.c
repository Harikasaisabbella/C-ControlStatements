#include<stdio.h>
void main()
{
	int n, temp = 0, a = 0, b = 1;
	printf("Enter range: ");
	scanf("%d", &n);
	while(temp <= n)
	{
		printf("%d ", temp);
		a = b;
		b = temp;
		temp = a + b;
    }
}
