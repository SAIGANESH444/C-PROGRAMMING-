// take string and print all the digits


#include<stdio.h>

void main()
{

int i;
char  st[30];

 printf("enter the string :");
 gets(st);

 for(i=0;st[i] != '\0';i++)
 {
     if(isdigit(st[i]))
        putch(st[i]);
 }

    }
