#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* ϸ���ڴ˲��� */
void Print( List L ); /* ϸ���ڴ˲��� */

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
    //�������ڵ�
    List m=(List)malloc(sizeof(struct Node));
    m->Data=X;
    m->Next=NULL;
    //ָ�붯
    List h=L;//ͷ�ڵ�
    List p=L->Next;//��һ���ڵ�
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


/* ��Ĵ��뽫��Ƕ������ */
