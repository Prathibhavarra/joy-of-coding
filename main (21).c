#include<stdio.h>
void main()
{
    int a[50],i,p,ele,n;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the elements into the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the elements are:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    
    
    printf("enter the position from which element has to be removed\n");
    scanf("%d",&p);
    printf("\n");
    ele=a[p];
    
    for(i=p;i<n;i++)
    {
        a[i-1]=a[i];
    }
    
    
    printf("the array after deleting the element is:\n");
    for(i=0;i<n-1;i++)
    printf("%d\t",a[i]);
    
    
}

