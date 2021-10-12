#include<stdio.h>
void main()
{
    int i,a[6];
    float b[6];
    char day[]={'M','T','W','T','F','S'};
    
    printf("enter Mr.Int's Wages: \n");
    for(i=0;i<6;i++)
    scanf("%d",&a[i]);
    for(i=0;i<6;i++)
    printf("%c =Rs %d\n",day[i],a[i]);
    
    printf("enter Mr.Float's wages: \n");
    for(i=0;i<6;i++)
    scanf("%f",&b[i]);
    for(i=0;i<6;i++)
    printf("%c =Rs %f\n",day[i],b[i]);
    
    printf("salary in reverse order:\n");
    for(i=5;i>=0;i--)
    printf("%c =Rs %d\n",day[i],a[i]);
    printf("\n");
    for(i=5;i>=0;i--)
    printf("%c =Rs %f\n",day[i],b[i]);
    
}

