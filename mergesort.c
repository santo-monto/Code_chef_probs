#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void merge_sort(int,int);
void merge(int,int,int);

int a[MAX];

int main()
{
    int p,q,r,n;

   printf("Enter the number of ele");
    scanf("%d",&n);

    p=0;
    r=n-1;
    //q=(p+r)/2;

    printf("Enter the array");
    for(int i=0;i<n;i++)  scanf("%d",&a[i]);

    merge_sort(p,r);
    //merge(p,q,r);

    printf("Sorted array is:");
    for(int i=0;i<n;i++) printf("%d\t",a[i]);

    return(0);

}

void merge_sort(int p,int r)
{
  if(r>p)
  {
  int q=(p+r)/2;
  merge_sort(p,q); // printf("hi");
  merge_sort(q+1,r);

  merge(p,q,r);
  }

}


int o[10],k[10];


void merge(int p,int q,int r)
{

  int e,d,m;
  m=p;


   //copying the original array to another array..


   //copying 1st half in to one array and respectively other array.
   printf("Hi");
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

       //for(i=0;i<r;i++) a[i]=c[i];

}
