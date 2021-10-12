#include<stdio.h> //assuming the numbers in chits can repeat 
void main()
{
    int a[10],i,pick=0,count=0,num;
    printf("enter numbers randomly from 1 to 10\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("\n");
    
    printf("select the number which mr.short int asks his dad to pick\n ");
    scanf("%d",&num);
    printf("\n");
    
    for(i=0;i<10;i++)
    {
        pick=pick+1;
        if(a[i]==num)
        {
            printf("%d is present at location %d in 10 chits\n",num,i+1);
            printf("it took %d attempts to locate this chit\n\n",pick);
            count++;
        }
        
    }
    if(count==0)
        printf("%d isnt present in the chits\n",num);
    else
    if(count==1)
        printf("%d is present in one chit out of all the chits\n",num);
    else
        printf("%d is located %d times in the chits\n",num,count);
    
}
