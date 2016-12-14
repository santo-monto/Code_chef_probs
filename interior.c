#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,m,summ;
  int sum=0;
  int array[20];

  scanf("%d%d",&n,&m);

  for(int i=0;i<n;i++) scanf("%d",&array[i]);

  sum=m;

  for(int i=0;i<n;i++)  {
    sum=m;
    sum=sum-array[i];
    sum=summ;
    for(int j=i+1,sum=summ;j<n;j++){

      if(j<i){ 

      if(sum>=array[j]){
      sum=sum-array[j];

    }

    else {j=i+2;sum=summ;continue;}
  }

    if(i=n-1) {j=0;continue;}

      //if(j=n-1){j=0;printf("gi");continue;}


}
printf("gi");

    if(sum==0) {printf("Yes"); exit(0);}
}




  printf("No");

  return(0);
}
