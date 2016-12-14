#include <stdio.h>
#include <stdlib.h>

int main()
{
  int test_case;
  int t=0;int l=0;

  scanf("%d",&test_case);

  while(t<test_case){
    int a[40000],b[40000],p[600];
    int n,q,k=0;
    int temp;

    scanf("%d",&n);
    scanf("%d",&q);

    int d=n*n;

    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++)  scanf("%d",&b[i]);




 for(int i=0;i<q;i++) scanf("%d",&p[i]);

 for(int i=0;i<q-1;i++){
   for(int j=0;j<q-1-i;j++) {
     if(a[j+1]<p[j]){
       temp=p[j+1];
       p[j+1]=p[j];
       p[j]=temp;}

     }}

    for(int i=0;i<n-1;i++){
      for(int j=0;j<n-1-i;j++) {
        if(a[j+1]<a[j]){
          temp=a[j+1];
          a[j+1]=a[j];
          a[j]=temp;}

        }
        if(i==d-p[l]-3) {printf("%d",p[i]);l++;}
                          }

      t++;

    }

    return(0);
  }
