#include <stdio.h>

int main()
{
    int i;
    float largest;
    int a[6]={560,660,590,760,480,960};
    float b[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    
     largest=a[0];
    for(i=1;i<6;i++)
    {
        
        if(largest<a[i])
        {
            largest=a[i];
        }
        
            
    } 
    printf("mr.int can party when he get a salary of %f\n",largest );
   
    
        largest=b[0];
         for(i=1;i<6;i++)
         {
        if(largest<b[i])
        {
            largest=b[i];
        }
         }
    
            
        
    printf("mr.float can party when he get a salary of %f\n",largest );

    return 0;
}
