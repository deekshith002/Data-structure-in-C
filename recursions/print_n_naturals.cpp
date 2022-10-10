#include<stdio.h>
void print_natural(int x,int i)
{
	if(i<=x)
	{
		printf("%d  ",i);
		i++;
		print_natural(x,i);
	}
}
int main()
{
	int n,i=1;
	printf("enter the value of n :");
	scanf("%d",&n);
	print_natural(n,i);
	
}
