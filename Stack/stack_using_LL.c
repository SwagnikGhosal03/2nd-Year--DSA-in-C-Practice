#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
        return 0;
}
int isfull(struct node *top)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
        return 0;
}
struct node *push(struct node *top, int x)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (isfull(top))
    {
        printf("stack overflow\n");
    }
    else
    {
        ptr->data = x;
        ptr->next = top;
        top = ptr;
        return top;
    }
}
int pop()
{
    struct node *p = top;
    if (isEmpty(top))
    {
        printf("stack underflow\n");
        return -1;
    }
    else
    {
        top = (top)->next;
        int x = p->data;
        free(p);
        return x;
    }
}
void traversal(struct node *top)
{
    struct node *ptr = top;
    while (ptr != NULL)
    {
        printf("->%d", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *top = NULL;
    top = push(top, 90);
    top = push(top, 45);
    int element = pop(top);
    if (element != -1)
    {
        printf("popped element =%d", element);
    }
    traversal(top);
    return 0;
}