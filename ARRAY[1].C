// take a value in array and display in reverse order

#include<stdio.h>

void main()
{
 int arr[100];
 int i;
  // take 10 numbers and store in array
for(i=0;i<10;i++)
{
printf("enter a number :");
scanf("%d",&arr[i]);
}
 // display in reverse

 for(i=9;i>=0;i--)
 printf("%d",arr[i]);
}
