//program to check if string is palindrom

#include <stdio.h>

#include <string.h>

int main()

{
    int c=0,i,len;
    char a[100];
    printf("Enter a string ");
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]==a[len-i-1])
        {
            c=c+1;
        }
    }
    if(c==i)
    {
        printf("It is a palindrom ");
    }
    else
    {
        printf("It is not a palindrome ");
    }
    return 0;
    

}
