#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>
int main()
{
   int testcases=0;
   scanf("%d",&testcases);

   while(testcases--)

   {
     char s[100];
     int count=0;
     int a[100]={0};
     char s1[100];
     int j=0;

     fgets(s,100,stdin);

     for(int i=0;s[i] !='\0';i++)
     {
       if(s[i]==' ')
       { count++;
         a[j]=i;
         j++;
       }
     }

    //printf("%d",count);
     if(count==2)
     {
       s1[0]=toupper(s[0]);
       s1[1]='.';
       s1[2]=toupper(s[a[0]+1]);
       s1[3]='.';
       s1[4]=toupper(s[a[1]+1]);
       for(int i=a[1]+2, j=5;s[i]!='\0';i++,j++)
       s1[j]=s[i];
       printf("%s",s1);

    }

}
    return (0);
}
