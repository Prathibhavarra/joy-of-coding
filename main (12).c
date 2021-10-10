#include<stdio.h>
void main()
{
    int r,n,sum=0,num,count=0,i;
    printf("enter a number");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        count++;
        n=n/10;
    }
    while(count!=1)
    {
        num=sum;
        sum=count=0;
       while( num!=0)
       {
        r=num%10;
        sum=sum+r;
        count++;
        num=num/10;
       } 
    }
    printf("the simplified single digit sum of %d is %d",i,sum);
   
    
}



