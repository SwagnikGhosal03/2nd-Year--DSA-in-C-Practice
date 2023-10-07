#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
void traversal(struct node * head){
   struct node * ptr=head;
do
{
    printf("->%d",ptr->data);
    ptr=ptr->next;
} while (ptr!=head);

}
struct node * inserAtFirst(struct node * head,int data){
    struct node * ptr=(struct node *)malloc(sizeof(struct node));
    struct node * p=head->next;
     ptr->data=data;
 while (p->next!=head)
 {
    p=p->next;
 }
 p->next=ptr;
 ptr->next=head;
 head=ptr;
 return head;
}
int main ()
{
struct node * head =(struct node *) malloc(sizeof(struct node));
struct node * first =(struct node *) malloc(sizeof(struct node));
struct node * second =(struct node *) malloc(sizeof(struct node));
struct node * third =(struct node *) malloc(sizeof(struct node));
head->data=1;
head->next=first;
first->data=2;
first->next=second;
second->data=3;
second->next=third;
third->data=4;
third->next=head;
// traversal(head);
head=inserAtFirst(head,56);
traversal(head);
return 0;
}