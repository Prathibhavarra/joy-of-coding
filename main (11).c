#include<stdio.h>
void main()
{
    int n,r,i,count=0,rev=0;
    printf("enter a number\n");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        printf("%d\t",r);
        count++;
    }
    printf("\n%d has %d digits\n",i,count);
    printf("reverse of %d is %d ",i,rev);
}
