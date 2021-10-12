#include<stdio.h>
void main()
{
    int a[6]={560,660,590,760,480,960};
    float b[6]={97.5,66,79.25,76.55,98.45,96.4};
    int i,sum=0,add=0;
    float avg,avg2;
    
    for(i=0;i<6;i++)
    {
        sum=sum+a[i];
        add=add+b[i];
    }
    for(i=0;i<6;i++)
    {
        avg=sum/6;
        avg2=add/6;
    }
    
    printf("mr.int's weekly wage and average are %d add %f\n",sum,avg);
    printf("mr.float's weekly wage and average are %d add %f",add,avg2);
    
}

