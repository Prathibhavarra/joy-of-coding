//program to find number of words in the string 

#include <stdio.h>

#include <string.h>

int main()

{
    int count=0,i,len;
    char a[100];
    printf("Enter a string ");
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]==' ')
        {
            continue;
        }
        else
        {
            count = count +1;
        }
    }
    printf("\nNumber of words in string are %d ",count );
    return 0;

}
