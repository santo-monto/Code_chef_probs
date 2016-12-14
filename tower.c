#include <stdio.h>
#include <stdlib.h>

void toh(int,char,char,char);

int main()
{
    int n=3;
    toh(n,'A','C','B');
    return(0);
}

void toh(int n,char fr,char tr,char ar)
{
  if(n==1) printf("Move rod 1 from %c to %c\n",fr,tr);
  else{
  toh(n-1,fr,ar,tr);
  printf("Move rod %d from %c To %c\n",n,fr,tr);
  toh(n-1,ar,tr,fr);
}




}
