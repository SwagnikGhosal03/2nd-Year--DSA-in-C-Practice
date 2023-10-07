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
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}
int main ()
{
struct stack *s;
s->size=5;
s->top=-1;
s->arr=(int*)malloc(s->size* sizeof(int));
if(isempty(s)){
    printf("the stack is empty\n");
}
else printf("the stack is full\n");
return 0;
}