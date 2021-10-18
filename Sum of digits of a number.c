#include<stdio.h>
void main()
{
	int n, r, sum;
	scanf("%d", &n);
	while(n > 9)
{   
    sum = 0;	
	while(n)
	{
		r = n%10;
		n = n/10;
		sum = sum + r;
	}
	n = sum;
}
    printf("%d ", sum);

}
	
