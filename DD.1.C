// SUM OF THE ARRAY IN ROW

#include<stdio.h>

int main()
{
int arr[5][5];
int i,j,n;

n=1;
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)

    {
        arr[i][j] = n++;

    }
}

for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
   {
       printf("%5d",arr[i][j]);
   }
   printf("\n");
}
}
