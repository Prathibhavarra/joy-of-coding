#include<stdio.h>
void main()
{
    int books,tot_amt,dis,f_amt;
    printf("enter the number of books\n");
    scanf("%d",&books);
    tot_amt= books*10;
    if(books<10000)
    {
        printf("no discount\n");
        f_amt=tot_amt;
    }
    else 
    if(books>10000 && books<15000)
    {
        dis= tot_amt*0.1;
        f_amt=(tot_amt-dis);
    }
    else
    if(books>15000 && books<20000)
    {
        dis= tot_amt*0.2;
        f_amt=(tot_amt-dis);
    }
    printf("%d is the total prize of the books",f_amt);
}

