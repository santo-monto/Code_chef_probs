#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int test_case;
  int k=0;
  int mul;

  //printf("Entre the number of tt");
  scanf("%d",&test_case);

  while(k<test_case)
  {
    int count=0;
    int n;
  //  printf("Enter a number;");
    scanf("%d",&n);

    int i=2;
    int a=n;
    int b=sqrt(n);
    int c=sqrt(b);

    if(n==1){ printf("INFINITY\n"); k++; continue;}

    for(i=2;i<=c;i++){
      mul = 1;
      while(mul*i<=a) mul*=i;
      if(a/mul==1)count++;
  }
  //printf("%d\n",count);

  for(i=c+1;i<=b;i++)
  { int p1=pow(i,3);
    int p2=pow(i,2);
    if(n/p1==1) count++;
    else if(n/p2==1) count++;

  }
  //printf("%d\n",count);

  if(i>b)
  {
    if(n==3) printf("%d\n",2);
    else if(n==2) printf("%d\n",1);
    else if(n%2!=0)printf("%d\n",count+1+(n/2));
    else printf("%d\n",count+(n/2));
  }
  else printf("%d\n",count);
  k++;
  }

  return(0);
}
