#include <stdio.h>
#include <stdlib.h>

int rec(int *,int,int,int,int);

int main()
{
  int test_case;
  int k=0;

  scanf("%d",&test_case);
  while(k<test_case){
  int n,m,a[20],i;
  int sum=0;

  //printf("enter the n and m value");
  scanf("%d%d",&n,&m);

  //printf("enter the deno");
  for(i=0;i<n;i++) scanf("%d",&a[i]);

  if(rec(a,m,sum,n,1)) printf("Yes\n");
  else printf("No\n");
  k++;
  }
  return 0;
}

int rec(int *a,int m,int sum,int n,int in)
{
  if(sum+a[in-1]==m) return 1;
  if(in==n) return 0;
  if(rec(a,m,sum+a[in-1],n,in+1) || rec(a,m,sum,n,in+1)) return 1;
  else return 0;
}
