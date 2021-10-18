#include<stdio.h>
void main()
{
	int n, r, sum = 0, temp = n;
	printf("Enter a number: ");
	scanf("%d", &n);
	temp = n;
	while(n > 0)
	{
		r = n % 10;
		sum = (sum * 10)+r;
		n = n / 10;
	}
	if(temp == sum)
	{
		printf("%d is a palindrome", sum);
	}
	else
	{
		printf("%d is not a palindrome", temp);
	}
}
