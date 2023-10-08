#include<stdio.h>
#include <stdlib.h>
struct stack{
int top;
int size;
char *arr;
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
void push(struct stack *ptr,char data){
    if (isfull(ptr))
    {
        printf("the stack is full\n");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=data;
    }
}
int pop(struct stack *ptr){
    char data;
    if (isempty(ptr)){
        printf("stack underflow");
    }
    else{
        data=ptr->arr[ptr->top];
        ptr->top--;
        return data;
    }
}
    int parenthesis(char *exp){
        struct stack *s;
        s->size=100;
        s->top=-1;
        s->arr=(char*)malloc(s->size*sizeof(char));
        for (int i = 0; exp[i]!='\0'; i++)
        {
           if (exp[i]=='(')
           {
           push(s,'(');
           }
           else if(exp[i]==')'){
            if (isempty(s))
            {
                return 0;
            }
            pop(s);
           }
           
        }
        if (isempty(s))
        {
            return 1;
        } 
        else return 0;
    }
int main (){
    char *exp="8(((((((7*5)))))))";
if (parenthesis(exp))
{
    printf("the parenthesis is matching");
}
else{
    printf("the parenthesis is not matching");
}

return 0;
}