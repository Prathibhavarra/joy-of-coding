#include<stdio.h>
void main()
{
    int r,n,s,rev=0,r2,s2,num=0,i;
    printf("enter the secret code\n");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        r=n%10;
        if(r!=9)
        {
          s=r+1;
          rev=rev*10+s;  
        }
        else
        {
            rev=rev*10;
            
        }
        
        n=n/10;
    }
    while(rev!=0)
    {
        r2=rev%10;
        num=num*10+r2;
        rev=rev/10;
    }
    printf("pincode of secret code %d is %d",i,num);
}

