#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,a,b,c;
    printf("enter the number of inputs\n ");
    scanf("%d",&n);
    if(n==2)
    {
        printf("enter 2 integers\n");
        scanf("%d %d",&a,&b);
        if(a>0 && b>0)
        {
            if(a>b)
            printf("%d is the largest of 2 numbers",a);
            else
            printf("%d is the largest of 2 numbers",b);
        }
            
        
        else
        {
            printf("invalid input !!! try again with positive values");
            exit(0);
        }
    }
    else 
    if(n==3)
    {
        printf("enter 3 integers\n");
        scanf("%d %d %d",&a,&b,&c);
        if(a>0 && b>0 && c>0)
        {
          if(a>b && a>c)
          {
             printf("%d is the largest of 3 integers",a);
          }
          else
          if(b>a && b>c)
          {
              printf("%d is the largest of 3 integers",b);
          }
          else
             printf("%d is the largest of 3 integers",c);
        }
        else
        {
            printf("invalid input !!! try again with positive values");
            exit(0);
        }
    
        
    }     
    
}
