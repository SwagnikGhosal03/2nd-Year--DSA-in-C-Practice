#include<stdio.h>
#include<stdlib.h>
struct Node{
int data;
struct Node * next;
};
struct Node * insertAtfirst(struct Node * head,int data){
struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
ptr->next=head;
ptr->data=data;
return ptr;
}
struct Node * insetInbetween(struct Node * head,int data ,int index){
    struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node * p=head;
    int i=0; 
    while(i!=index-1) {
      p=p->next;
      i++;
}
ptr->data=data;
ptr->next=p->next;
p->next=ptr;
}
struct Node * insertAtlast(struct Node * head,int data){
struct Node * ptr= (struct Node *)malloc(sizeof(struct Node));
struct Node * p=head;
ptr->data=data;
while (p->next!=NULL){
    p=p->next;
}
p->next=ptr;
ptr->next=NULL;
return head;
}
void traverse(struct Node * ptr){
while (ptr!=NULL){
   printf("-> %d",ptr->data);
   ptr=ptr->next;
}
}
int main (){
struct Node * head=(struct Node *)malloc(sizeof(struct Node));
struct Node * first=(struct Node *)malloc(sizeof(struct Node));
struct Node * second = (struct Node *)malloc(sizeof(struct Node));
struct Node * third=(struct Node *)malloc(sizeof(struct Node));
head->data=1;
head->next=first;
first->data=2;
first->next=second;
second->data=3;
second->next=third;
third->data=4;
third->next=NULL;
// head=insertAtfirst(head,67);
// insetInbetween(head,89,3);       
insertAtlast(head,45);
traverse(head);
return 0;
}