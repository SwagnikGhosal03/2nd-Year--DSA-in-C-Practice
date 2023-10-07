#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
   struct Node * next;
};
void traversal(struct Node * ptr){
while (ptr!=NULL)
{
    printf("-> %d ",ptr->data);
    ptr=ptr->next;
}
}
int main ()
{
struct Node * head =(struct Node *) malloc(sizeof(struct Node));
struct Node * first =(struct Node *) malloc(sizeof(struct Node));
struct Node * second =(struct Node *) malloc(sizeof(struct Node));
struct Node * third =(struct Node *) malloc(sizeof(struct Node));
head->data=1;
head->next=first;
first->data=2;
first->next=second;
second->data=3;
second->next=third;
third->data=4;
third->next=NULL;
traversal(head);
return 0;
}