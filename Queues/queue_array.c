#include<stdio.h>
#include<stdlib.h>
struct queue{
int size;
int f;
int r;
int *arr;
};
void enqueue(struct queue *q,int val){
if (q->r==q->size-1)
{
   printf("queue is full\n");
}
else{
    q->r++;
    q->arr[q->r]=val;
}
}
int dequeue(struct queue *q){
    int a=-1;
    if (q->r==q->f)
    {
        printf("the queue is empty\n");
        return -1;
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
int main (){
struct queue q;
q.size=10;
q.r=-1;
q.f=-1;
q.arr=(int *)malloc(q.size * sizeof(int));
enqueue(&q,1);
enqueue(&q,2);
enqueue(&q,3);
enqueue(&q,4);
printf("dequeued element =%d\n",dequeue(&q));
printf("dequeued element =%d\n",dequeue(&q));
printf("dequeued element =%d\n",dequeue(&q));
return 0;
}