#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef int Position;
typedef struct QNode *PtrToQNode;
struct QNode {
    ElementType *Data;  /* 存储元素的数组   */
    int n;
    int MaxSize;        /* 队列最大容量     */
};
typedef PtrToQNode Queue;

Queue creatQ (int length);
Queue move(Queue queue);
int main()
{
    int length,m;
    scanf("%d%d",&length,&m);
    Queue queue=creatQ(length);
    Queue queue1=queue;
    int i;
    for(i=0;i<m;i++)
    {
       queue1=move(queue1);
    }
    //注意输出格式的问题
    for(i=0;i<queue1->MaxSize-1;i++)
    {
        printf("%d ",queue1->Data[i]);
    }
    if(i==queue1->MaxSize-1)
    {
         printf("%d",queue1->Data[i]);
    }


    return 0;
}
Queue creatQ (int length)
{
    Queue Q = (Queue)malloc(sizeof(struct QNode));
    Q->Data = (ElementType *)malloc(length * sizeof(ElementType));
    Q->n=length;
    Q->MaxSize=length;
    int i;
    for(i=0;i<length;i++)
    {
        scanf("%d",&(Q->Data[i]));
    }
    return Q;
}
//只是移动一位
Queue move(Queue queue)
{
    ElementType x=queue->Data[0];
    int i;
    for(i=0;i<queue->MaxSize;i++)
    {
        queue->Data[i]=queue->Data[i+1];
        queue->n--;

    }
    queue->Data[queue->MaxSize-1]=x;
    return queue;
}
