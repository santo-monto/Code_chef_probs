#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b)
{
  (a>b? r=a:r=b);
  while(rem!=0)
  {
    rem=r%b;
    b=r;
    a=b;
  }
}
int main()
{
  int test_case;
  int k=0;

  printf("Enter the number of tt:");
  scanf("%d",&test_case);

  while(k<test_case)
  {
    int n;

    printf("Enter the value of n");
    scanf("%d",&n);

    int a[n];

    printf("Enter the array");
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    //applying Euclidean algorithm..

    for(i=1;i<n;i++)
    {
      if(gcd(a[i],a[i-1])) count++;
    }

    k++;;
  }

  return(0);
}
