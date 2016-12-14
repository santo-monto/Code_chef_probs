#include <stdio.h>
#include <stdlib.h>

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

    int i=3;
    int a=n;

    if(n==1){ printf("INFINITY\n"); k++; continue;}

    for(i=3;i<=n/2;i++){
      mul = 1;
      while(mul*i<=a) mul*=i;
      if(a/mul==1)count++;
  }
  if(n>1)
  {
    if(n%2!=0)printf("%d",count+2+(n/2));
    else printf("%d",count+(n/2)+1);
  }
  else printf("%d",count);
  k++;
  }

  return(0);
}
