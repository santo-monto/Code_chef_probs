#include <stdio.h>
#include <stdlib.h>

int main()
{
  int test_case;
  int k=0;

  //printf("enter the number of tt:");
  scanf("%d",&test_case);

  while(k<test_case){

    int n;

    //printf("Enter the value of n da!!:");
    scanf("%d",&n);

    int c=n%8;

    if(c==0) printf("%d",n-1);
    else if(c<4)
    {
      printf("%d",n+3);
    }
    else if(c<7)
    {
      printf("%d",n-3);
    }

    else if(c==7)
      printf("%d",n+1);

      if(c==3||c==6) printf("UB\n");
      else if(c==2||c==5) printf("MB\n");
      else if(c==1 || c==4) printf("LB\n");
      else if(c==7) printf("SU\n");
      else if(c==0) printf("SL\n");

      k++;

  }
  return(0);
}
