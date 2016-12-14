#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    int c=0;
    int h=0;
    int k=1;

    scanf("%i",&t);

    while(k<=t)
    {
        int n,m,i,j;
        int list[10000]={0};
        int a[10000];
        int s[10000]={0};

        scanf("%i%i",&n,&m);

        for( j=0;j<m;j++)  scanf("%i",&list[j]);

        for( i=1;i<=n;i++)  a[i]=i;

        for( i=1;i<=n;i++)
        {
          for( j=0;j<m;j++)
          {
            if(list[j]==i)
            {
            a[i]=0;
            }
          }
        }
        //for(int i=1;i<=n;i++) printf("%d ",a[i]);
        //prob over!!!!!!!!!!!!!!!!




        //printf("\n")
        int b=1;
        for( i=0;i<(n-m);i++)
        {
          while(b<=n)
          {
            if(a[b]!=0)
            {
              s[i]=a[b];
              b++;
              break;
            }
            else b++;
          }
          //j++;

        }


        for( i=0;i<(n-m);i++)
        {
            //printf("%d ",s[i]);
          if(i%2==0) {h++;
            printf("%i ",s[i]);}

        }
        if(h==0) printf(" ");

        printf("\n");
        for( i=0;i<(n-m);i++)
        {

          if(i%2!=0)
          { c++;
            printf("%i ",s[i]);
          }
        }

        if(c==0) printf(" ");

        k++;

    }

    return(0);
}
