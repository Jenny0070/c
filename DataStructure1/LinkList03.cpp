#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0

typedef struct LNode
{
    int data;
    struct LNode *next;
}*LinkList;

/*����ͷ�ڵ�Ŀ�����*/
 int InitList1(LinkList *L)
{
    LNode *s=(LNode *)malloc(sizeof(LNode));
	s->next=NULL;
	if(L==NULL)
		*L=s;
	if(s==NULL)
		return ERROR;
	return OK;
}



/**< ��ͷ�ڵ�� */
void InitList2(LinkList &L)
{
   L=(LinkList)malloc(sizeof(LNode));
   if(L==NULL)
   {
       printf("����ռ�ʧ�ܣ�");
       exit(0);
   }
   L->next=NULL;

}

/**< ǰ�巨���뵽������ */
int InsertToLinkList(LinkList *L,int data)
{
    LNode *s=(LNode*)malloc(sizeof(LNode));
    LNode *p;
    p=*L;
    if(s==NULL)
        return ERROR;
    s->data=data;
    s->next=p->next;
    p->next=s;
    *L=p;
    return OK;
}

void ShowLinkList(LinkList L)
{
    LinkList p=L->next;
    int i=1;
    while(p)
    {
        if(i==1)
        {
            printf("%d",p->data);
        }
        else
        {
            printf("->%d",p->data);
        }
        i++;
        p=p->next;
    }
}

/**< ��� */
int LinkListLength(LinkList L)
{
    LinkList p;
    p=L->next;
    int j=0;
    while(p!=NULL)
    {
        p=p->next;
        p++;
    }
    return j;
}

/**< main���� */
int main()
{
    int i;
    LNode* L=NULL;
    InitList1(&L);
    for(i=1;i<10;i++)
		InsertToLinkList(&L,i);
	ShowLinkList(L);
	return 0;

}
