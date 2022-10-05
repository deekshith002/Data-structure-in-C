//SELECTION SORT


#include<stdio.h>
int main()
{
  int i,j,temp,s,k,n;
  printf("enter the number of elements:- ");
  scanf("%d",&n);
  int arr[n];
  printf("enter the elements:-");
  for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }

  //SORTING
  for(i=0;i<n-1;i++)
    {
      s = arr[i];
      for(j=i+1;j<n;j++)
        {
          if (s>arr[j])
          {
            s = arr[j];
            k = j;
          }
        }
      temp = arr[i];
      arr[i] = arr[k];
      arr[k] = temp;


    }
  //PRINTING
  for(i=0;i<5;i++)
    {
      printf("%d ",arr[i]);
    }
}
