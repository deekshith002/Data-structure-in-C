#include<stdio.h>
int sum=0;
int sum_of_num(int x,int i)
{
	if(i<=x)
	{
		sum += i;
		i++;
	}
	sum_of_num(x,i);
	return sum;
}
int main()
{
	int n,i=1;
	printf("enter the value of n :");
	scanf("%d",&n);
	printf("%d",sum_of_num(n,i));
	
}
