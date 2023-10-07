#include<stdio.h>
int main ()
{
    int r,c;
printf("enter number of rows and coloumns");
scanf("%d %d",&r,&c);
int arr[r][c];
printf("enter the array elements\n");
for (int i = 0; i < r; i++)
{
   for ( int j = 0; j < c; j++)
   {
    scanf("%d",&arr[i][j]);
   } 
}
printf("the sparse matrix of the following is:\n");
for (int i = 0; i < r; i++)
{
   for ( int j = 0; j < c; j++)
   {
   if(arr[i][j]!=0){
    printf("\n %d %d %d",i+1,j+1,arr[i][j]);
   }
   } 
}
return 0;
}