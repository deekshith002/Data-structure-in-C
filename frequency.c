#include <stdio.h>
int main()
{
 int i,j,element,count;
  int arr[11]={2,4,0,1,2,0,1,7,4,3,4};
  for(i=0;i<11;i++)
    {
      if(arr[i]>=0)
      {
         count=0;
         for(j=0;j<11;j++)
         {
           if(arr[i]==arr[j])
           {
             if(count==0)
             {
               count += 1;
             }
             else if(count>0)
             {
              arr[j] = -1;
              count += 1;
             }
            }
          }
        printf("%d - %d \n",arr[i],count);
      }
    }
}
