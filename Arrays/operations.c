#include<stdio.h>
int nonzero(int arr[][100],int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
     for (int j = 0; j <n; j++)
     {
        if(arr[i][j]!=0){
            count++;
        }
     }
    }
    return count;
}
void uppertriangular(int arr[][100],int n){
for (int i = 0; i < n; i++)
{
    for (int j = 0; j< n; j++)
    {
        if(i<=j){
            printf("%d\t",arr[i][j]);
        }
        else printf("0");
    }
    printf("\n");
}
}
void diagonal(int arr[][100],int n){
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            if(i<j){
                printf("%d\t",arr[i][j]);
            }
            else if(i>j){
                printf("%d\t",arr[i][j]);
            }
            else printf("0\t");
        }
        
    }printf("\n");
    
}
int main ()
{
int n;
printf("enter number of rows & coloumns\n");
scanf("%d",&n);
int arr[100][100];
printf("enter the matrix elements\n");
for (int i = 0; i < n; i++)
{
    for (int j = 0; j< n; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
nonzero(arr,n);
diagonal(arr,n);
uppertriangular(arr,n);
return 0;
}