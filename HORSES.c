#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int k=0;

    scanf("%d",&t);

    while(k<t)
    {
      int  a[10000]={0},n;
      int i=0;
      int j=0;
      int temp=0;
      int diff=0;

      scanf("%d",&n);

      for(i=0;i<n;i++) scanf("%d",&a[i]);

      //sorting begins..

      for(i=0;i<n-1;i++)
      {
          for(j=0;j<n-i-1;j++)
          {
            if(a[j+1]<a[j])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
          }
      }
      diff=a[1]-a[0];
      for(i=0;i<n-2;i++)
      {  //printf("%d\t",a[i]);

        if(diff>=(a[i+2]-a[i+1])) diff=a[i+2]-a[i+1];
      }

      printf("%d\n",diff);
      k++;

      }


      return(0);
}
