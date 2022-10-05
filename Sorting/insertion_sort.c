//INSERTION SORTING

#include<stdio.h>
int main()
{
  int arr[8]={5,9,2,88,4,3,7,1};
  int i,j,temp,temp1;
  for(i=0;i<7;i++)
    {
      if(arr[i+1]<arr[i])
      {
        temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
      }
      for(j=i;j>0;j--)
        {
          if(arr[j] < arr[j-1])
          {
            temp1 = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp1;
          }
        }

    }
  for(i=0;i<8;i++)
    {
      printf("%d  ",arr[i]);
    }
}
