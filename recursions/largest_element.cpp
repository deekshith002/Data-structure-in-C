#include<stdio.h>
int largest_element(int a[10]);
int a[10]={55,44,77,9,6,3,2,1,999,12};
int large = 0;

int largest_element(int i)
{
	for(i=0;i<10;i++)
	{
		if (a[i]>large)
		{
			large = a[i];
			largest_element(i);
		}
	}
	return large;
}

int main()
{
	int i=0;
	printf("%d",largest_element(i));
}
