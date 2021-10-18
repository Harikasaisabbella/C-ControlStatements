#include<stdio.h>
void main()
{
	int n, r, odd_sum = 0, even_sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(n)
	{
		r = n%10;
		if(r % 2 == 0)
		{
			even_sum = even_sum + r;
		}
		else
		{
			odd_sum = odd_sum + r;
		}
		n = n/10;
	}
	printf("%d\n%d", even_sum, odd_sum);
}
