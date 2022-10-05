#include<stdio.h>
int n;
void quicksort(int a[n],int l,int r)
{
  int i,j,temp,p;
  i = l+1, j = r;
  p = a[l];
  if(i<j)
  {
    while(a[i]<=p && i<r)
      {
        while(a[j]>p && j>i)
          {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j--;
          }
        i++;

      }
  }
  temp = p;
  p = a[j];
  a[j] = temp;
  quicksort(a,l,j-1);
  quicksort(a,j+1,j);




}
int main()
{
  int x,n;
  printf("enter the no of elements:-");
  scanf("%d",&n);
  int a[n];
  for(x=0;x<n;x++)
    {
      scanf("%d",&a[x]);
    }
  quicksort(a[n],0,n-1);
}
