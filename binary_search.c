//binary search
#include<stdio.h>
int main()
{
  int a[10] = {0,5,17,23,30,44,55,66,77,88,99};
  int f,l,m,n,c=0;
  printf("ENTER THE ELEMENT TO SEARCHED:- ");
  scanf("%d",&n);
  //searching
  f=0,l=9;
  while(f!=l)
    {
      m = (f+l)/2;
      if(n>a[m])
      {
        f = m+1;
      }
      else if(n==a[m])
      {
        c=1;
        break;
      }
      else
      {
        l = m-1;
      }
    }
  if (l==f)
  {
    if (a[l] == n)
    {
      c=1;
    }
  }

  if (c==0)
  {
    printf("NOT FOUND");
  }
  else{
    printf("huuurraayy found");
  }
}
