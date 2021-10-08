#include<stdio.h>
void main()
{
    int n;
    printf("enter the age\n");
    scanf("%d",&n);
    if(n==18 || n>18)
    {
         printf("eligible for voting");
    }
    else
    {
        printf("not eligible for voting");
    }
}
