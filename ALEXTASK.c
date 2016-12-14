#include <stdio.h>
#include <stdlib.h>

int main()

{     int task,k=0;
      scanf("%d",&task);

      while(k<task)
      {


     int  task_number;
     long int a[1000],i,j,temp;

    //printf("Enter the number of sensorrs\n\a");
    scanf("%d",&task_number);

  //  printf("Go on,enter the frequencies.:.:.:.\n\a");
    for( i=0;i<task_number;i++) scanf("%ld",&a[i]);


    for(i=0;i<task_number-1;i++)
    {
        for(j=0;j<task_number-i-1;j++)
        {
          if(a[j+1]<a[j])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }
        }
    }

  //  for(i=0;i<task_number;i++) printf("%d",a[i]);

    if(a[0]==a[1]) printf("%ld\n",a[0]);

    else
    if(a[1]%a[0]==0) printf("%ld\n",a[1]);

    else{
      //int tempp=a[1]%a[0];
    for(i=2;i<task_number;i++){
    if(a[i]%a[0]==0){
    break;
    //tempp=a[i]%a[0];
  }
}   if(i<task_number){
    if(a[i]>a[1]*a[0]) printf("%ld\n",a[1]*a[0]);


    else printf("%ld\n",a[i]);}

    else printf("%ld\n",a[1]*a[0]);






  }

  k++;
}
//printf("%d",sizeof(unsigned long));
    return(0);


}
