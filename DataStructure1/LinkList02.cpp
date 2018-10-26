#include <stdio.h>
#include<stdlib.h>

#define OK 1
#define ERROR 0

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode,*LinkList;

LNode* MakeNode(LinkList p,int date);
int FreeNode(LinkList p);
LinkList InitList(LinkList &L);


