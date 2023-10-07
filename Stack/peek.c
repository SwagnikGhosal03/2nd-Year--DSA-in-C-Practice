#include<stdio.h>
#include<stdlib.h>
struct stack
{
   int top;
   int size;
   int *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size -1){
        return 1;
    }
    return 0;
}
void push(struct stack *ptr,int data){
if(isfull(ptr)){
    printf("stack overflow");
}
else{
    ptr->top++;
    ptr->arr[ptr->top]=data;
}
}
int pop(struct stack *ptr){
    int data;
    if (isempty(ptr))
    {
       printf("stack underflow\n");
       return -1;
    }
    else{
        data=ptr->arr[ptr->top];
        ptr->top--;
        return data;
    }
    
}
int peek(struct stack *ptr,int i){
    int arrayind=ptr->top-i+1;
    if (arrayind<0)
    {
       return -1;
    }
    else{
        return ptr->arr[arrayind];
    }
    
}
int main ()
{
struct stack *s = (struct stack*)malloc(sizeof(struct stack));
s->size=10;
s->top=-1;
s->arr=(int*)malloc(s->size * sizeof(int));
push(s,1);
push(s,2);
push(s,3);
push(s,4);
push(s,5);
for (int i = 1; i < s->top+1; i++)
{
    printf("the value at position %d is %d\n",i,peek(s,i));
}
return 0;
}