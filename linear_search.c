// linear search


#include <stdio.h>
int main()
{
  int n,i,element,f=0;
  printf("ENTER THE LENGTH OF ARRAY: ");
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
    {
      printf("enter the element: ");
      scanf("%d",&arr[i]);
    }
  printf("enter the sample element: ");
  scanf("%d",&element);
  for(i=0;i<n;i++)
    {
      if(arr[i]==element)
      {
        f=1;
      }
    }
  if (f)
  {
    printf("element is found in the array in the %d index",i);
  }
  else
  {
    printf("element not found");
  }
}
