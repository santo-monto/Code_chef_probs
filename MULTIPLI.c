#include <stdio.h>

int main()
{
    int a;
    int k=1;
    char c;

    scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
    	for(int j=0;j<i+k;j++)
    	{
    		if(j<=i){
			c='A'+j;
    		printf("%c",c);}
    		else{
  			c=c-1;
    		printf("%c",c);}

        }
        printf("\n");
        k++;
    }
    return 0;
}
