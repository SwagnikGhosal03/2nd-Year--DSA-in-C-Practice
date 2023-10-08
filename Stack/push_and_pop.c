#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
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
    if (isfull(ptr))
    {
        printf("stack overflow\n");
    }
    else{ ptr->top++;
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
int main ()
{
struct stack *s;
s->size=10;
s->top=-1;
s->arr=(int*)malloc(s->size * sizeof(int));
push(s,1);
push(s,2);
push(s,3);
push(s,4);
push(s,5);
printf("popped element=%d\n",pop(s));
printf("popped element=%d\n",pop(s));
printf("popped element=%d\n",pop(s));
printf("popped element=%d\n",pop(s));
printf("popped element=%d\n",pop(s));
return 0;
}