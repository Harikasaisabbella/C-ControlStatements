#include<stdio.h>
void main()
{
	int n, temp, a = 0, b = 1, i = 1;
	printf("Enter range: ");
	scanf("%d", &n);
	while(i <= n)
	{
		printf("%d ", a);
		temp = a + b;
		a = b;
		b = temp;
		i++;
    }
}
