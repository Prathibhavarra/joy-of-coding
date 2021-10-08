#include <stdio.h>

int main()
{
    long int rank;
    printf("Enter the rank of the student\n");
    scanf("%ld",&rank);
    if(rank<=3250)
    {
        printf("COURSES AVAILABLE FOR THIS RANK ARE CSE,ISE,EANDC,Mech");
        
    }
        else if(3250<rank && rank<=6505)
        {
            printf("COURSES AVAILABLE FOR THIS RANK ARE ISE,EANDC,Mech");
        }
        else if(6505<rank && rank<=12012)
        {
            printf("COURSES AVAILABLE FOR THIS RANK ARE EANDC,Mech");
        }
        else if(12012<rank && rank<=22340)
        {
            printf("COURSE AVAILABLE FOR THIS RANK IS MEC");
        }
        else 
        {
            printf("NO COURSES AVAILABLE");
        }
    

    return 0;
}


