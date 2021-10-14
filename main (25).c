//program to concatenate ,find length and convert to uppercase 

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main()
{
    char str[]="R N S Institution of Technology ",str1[]="Bengaluru",str2[500];
    int len;
    printf("The string is\n ");
    puts(str);
    len = strlen(str);
    printf("\nLength of string is %d \n",len);
    //string concatenation strcat(source,destination );
    strcat(str,str1);
    printf("\nString after concatenation is %s\n  ",str );
    //string to upper case
    toupper(str);
    printf("String in Upper case is %s ",str );
    return 0;

    
}

