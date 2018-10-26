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
    List S1,S2,S3;

    S1=creatList();
    S2=creatList();
    S3=mergeList(S1,S2);
    printList(S3);
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
    if(p=NULL)
    {
        printf("NULL");
    }
    else{
        printf("%d",p->Data);
        p=p->Next;
        while(p!=NULL){
            printf(" %d",p->Data);
            p=p->Next;
        }
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
        if((p1->data)==(p2->data))
        {
            p->next=p1;
            p1=p1->next;
            p2=p2->next;
            p=p->next;
        }
        else if((p1->data)<(p2->data))
        {
            p1=p1->next;
        }
        else
            p2=p2->next;
    }
    return S;
}



