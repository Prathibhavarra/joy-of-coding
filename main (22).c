#include<stdio.h>
void main()
{
    int a[100],n,i,j,count=0;
    printf("enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("enter the elements into array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("elements are:\n");
    for(i=0;i<n;i++)
     printf("%d\t",a[i]);
     printf("\n");
    
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
            }
        }
    }
    if(count==0)
    {
    printf("The group is distinct and there are no twins\n");
    }
    else
    printf("the group isnt unique as numbers are repeated and twins are present");
}
