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
    if(n==1){ printf("INFINITY\n"); k++; continue;}

    int i=2;
    int j=1;
    int a=n;
    for( i=3;i<=n;i++){
    while(1)
    {
      if(n>=pow(i,j)) {
        if(n<pow(i,j)+i) count++;
      }
      else break;
      j++;
    }
    j=1;
  }
  printf("%d\n",count+1);
  k++;
}
return(0);
}
