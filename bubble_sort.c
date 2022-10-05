//BUBBLE SORTING
#include<stdio.h>
int main()
{
  int i,j,temp,n;
  printf("enter the no of elements: ");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements:-");
  for(i=0;i<n;i++)
    {

      scanf("%d",&arr[i]);
    }
  for(i=0;i<n;i++)
    {
      for(j=1;j<n-i;j++)
        {
          if(arr[j]<arr[j-1])
          {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
          }
        }
    }
  for(i=0;i<n;i++)
    {
      printf("%d  ",arr[i]);
    }
}
