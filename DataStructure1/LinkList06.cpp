#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}

List Insert( List L, ElementType X )
{
    //定义插入节点
    List m=(List)malloc(sizeof(struct Node));
    m->Data=X;
    m->Next=NULL;
    //指针动
    List h=L;//头节点
    List p=L->Next;//第一个节点
    if(L==NULL)
    {
        h->Next=m;
        return L;
    }
    else
    {
        while(p->Data<X)
        {
            h=p;
            p=p->Next;
            if(p->Next==NULL)
            {
            p->Next = m;
            return L;
            }

        }
        m->Next=p;
        h->Next=m;
        return L;

    }


}


/* 你的代码将被嵌在这里 */
