#include<stdio.h>
void insert(int arr[],int n,int element,int position){
  if(position>n || position<0){
    printf("insertion not possible");
  }    
  for (int  i = n; i >position; i--)
  {
    arr[i]=arr[i-1];
  }
  arr[position]=element;
  n++;
}
void traverse (int arr[],int n){
    printf("traversed array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
void delete(int arr[],int n,int position){
    for (int i = position; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;  
}
int linearsearch(int arr[],int n ,int element){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
    
}
int main ()
{
    int n ;
int arr[n];
printf("enter number of elements\n");
scanf("%d",&n);
printf("enter array elements\n");
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
for (int i = 0; i < n; i++)
{
    printf("%d\t",arr[i]);
}
while (1)
{
   printf("***Menu***\n");
   printf("a.Insert\n");
   printf("b.delete\n");
   printf("c.linearsearch\n");
   printf("d.traverse\n");
   printf("e.exit\n");
int element,position;
int ans=linearsearch(arr,n,element);
   char choice;
   printf("enter your choice\n");
   scanf("%c",&choice);
   switch (choice)
   {
   case 'a':
   printf("enter the element to be inserted\n");
   scanf("%d",&element);
   printf("enter the index where the number is to be added\n");
   scanf("%d",&position);
   insert(arr,n,element,position);
    break;
   case 'b':
   printf("enter the position from where to be deleted\n");
   scanf("%d",&position);
   delete(arr,n,position);
   break;
   case 'c':
   if(ans!=1){
    printf("element found at index %d\n",ans);
   }
   else printf("element not found\n");
   break;
   case'd':
   traverse(arr,n);
   break;
   case'e':
   printf("exit");
   default: 
   printf("exit\n");
    break;
   }
}
return 0;
}