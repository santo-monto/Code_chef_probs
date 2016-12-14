#include <stdio.h>

int main()
{
    int a,b,s,e;

    scanf("%d%d",&a,&b);

    s=a-b;

    s=s/10;

    e=s%10;

    s=(s*10)+5;

    printf("%d",s);

    return(0);

  }
