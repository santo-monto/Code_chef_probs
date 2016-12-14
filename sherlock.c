/*

Constraints

1 ≤ T ≤ 100
1 ≤ N ≤ 105
1 ≤ Ai ≤ 109
Sum of N over all test cases ≤ 2*105

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//int a[1000000]={0};


void merge_sort(int [],int,int);
void merge(int[],int,int,int);

int main(void)
{
  int test_case,temp,j;
  int k=0;
  int diff=0;

  //printf("Enter the test cases pls");
  scanf("%d",&test_case);

  while(k<test_case)
  {
    //a[10]={0}
    int n,i;
    int p=0;
    int flag=0;

    //printf("enter the value of n");
    scanf("%d",&n);
    int r=n-1;
    int a[n];

    //printf("enter the array");
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    merge_sort(a,p,r);
    for(i=1;i<n;i++)
    {if(a[i]-a[i-1]>1){flag=1;printf("NO \n");break;}}

    if(flag!=1) printf("YES \n");
    k++;
  }

}

void merge_sort(int a[],int p,int r)
{
  if(r>p)
  {
  int q=(p+r)/2;
  merge_sort(a,p,q); // printf("hi");
  merge_sort(a,q+1,r);
  //printf("Hi");

  merge(a,p,q,r);
  }

}
void merge(int a[],int p,int q,int r)
{ //printf("hi");

  int e=q-p+1;
  int d=r-q;
  int o[e+1],k[d+1];
  int m;
  m=p;

   for( e=0;e<(q-m+1);e++){
      o[e]=a[p];
      p++;
    }
    for( d=0;d<(r-q);d++){
       k[d]=a[p];
       p++;
     }

     p=m;

     for( e=0,d=0;e<q-m+1 && d<r-q;p++){
       if(o[e]<k[d]) {a[p]=o[e]; e++;}
       else{ a[p]=k[d];d++;}
     }


     for(;e<q-m+1;e++){
      a[p]=o[e]; p++;}

      for(;d<r-q;d++){
       a[p]=k[d]; p++;}


}
