#include<stdio.h>
int sum = 0;
int sum_of_digits(int n);
int sum_of_digits(int n)
{
	int r,num;
	if(n>0)
	{
		r = n%10;
		sum = sum + r;
		n = n/10;
		sum_of_digits(n);
    }
    return sum;
	
}

int main()
{
	int n;
	printf("enter the element:");
	scanf("%d",&n);
	printf("%d",sum_of_digits(n));
}
