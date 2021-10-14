#include <stdio.h>
#include <string.h>

int main()
{
   // scanf()- it is used to read the input from user.string is read using %s format specifier 
   // printf()- it is used to print the output on the screen.
   // gets()- it is used to read a string from user.
    //puts()- it is used to print a string.
   // getch()-it is used to get or read a character.
   // putch()- it is used to print the character.
   // getche()-getche is a C function to read a single character from the keyboard which displays immediately
    //        on screen without waiting for the enter key
    
    
       char ch,c;
     char a[100],str[30];
     int i;
     printf("Enter a character ");
     scanf("%c",&ch);//read a character 
     printf("The character is %c ",ch );//print a character 
      printf("\nEnter a string without space  ");
      scanf("%s",a);
      printf("The string without space is %s ",a);//it is used to read the string without spaces 
  // to get character using getch and putch functions 
      printf("\nEnter a character ");
     c = getch();
      printf("The Character is  ");
    
     //to read and print string using gets and puts functions 
    printf("\nEnter the string ");
     gets(str);
     printf("The string is ");
     puts(str);


       return 0;
}
