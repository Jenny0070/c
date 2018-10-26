#include <stdio.h>
#include <stdlib.h>

#define OK 1
#define ERROR 0

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List creatList();
List mergeList( List S1, List S2 );
void printList(List L);


int main()
{
    List S1,S2,S;

    S1=creatList();
    S2=creatList();
    S=mergeList(S1,S2);
    printList(S);
    return 0;
}

List creatList()
{
    List L=(List)malloc(sizeof(PtrToNode));
    L->Next = NULL;
    List h=L;
    int m;
    scanf("%d",&m);

    while(m>0)
    {
        List p=(List)malloc(sizeof(PtrToNode));
        p->Data=m;
        p->Next=NULL;
        h->Next=p;
        h =p;
        scanf("%d",&m);
    }
    return L;
}
void printList(List L)
{
    List p=L->Next;
    while(p!=NULL)
       {
            printf("%d ",p->Data);
            p=p->Next;
       }


}
List mergeList( List S1, List S2)
{
    List S=(List)malloc(sizeof(PtrToNode));
    S->Next = NULL;
    List p1=S1->Next;
    List p2=S2->Next;
    List p;
    S=p=S1;

    while((p1!=NULL)&&(p2!=NULL))
    {
        if((p1->Data)<=(p2->Data))
        {
            p->Next=p1;
            p=p->Next;
            p1=p1->Next;
        }
        else
        {
            p->Next=p2;
            p=p->Next;
            p2=p2->Next;
        }
    }
/**< p->Next=p1?p1:p2;
 */
    if(p1!=NULL)
        p->Next=p1;
    else
        p->Next=p2;
    return S;
}



