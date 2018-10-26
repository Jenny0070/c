
#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;

void init(LinkList &L);
void read(LinkList &L);
void merge(LinkList La,LinkList Lb,LinkList &Lc);
void print(LinkList L);

int main(){
    LinkList la,lb,lc;
    init(la);
    init(lb);
    init(lc);
    read(la);
    read(lb);
    merge(la,lb,lc);
    print(lc);
    return 0;
}


void init(LinkList &L){
    L=(LinkList)malloc(sizeof(LNode));
    L->next = NULL;
}
void read(LinkList &L){
    LinkList p,tem;
    int e;
    tem=L;

    scanf("%d",&e);
    while(e>0){
        p=(LinkList)malloc(sizeof(LNode));
        p->data=e;
        p->next=NULL;
        tem->next=p;
        tem=p;
        scanf("%d",&e);
    }
}

void print(LinkList L){
    LinkList p=L->next;
    if(!p){
        printf("NULL");
    }
    else{
        printf("%d",p->data);
        p=p->next;
        while(p){
            printf(" %d",p->data);
            p=p->next;
        }
    }
}

void merge(LinkList La,LinkList Lb,LinkList &Lc){
    LinkList pa,pb,pc;
    pa=La->next;pb=Lb->next;
    Lc=pc=La;
    while(pa&&pb){
        if(pa->data<=pb->data){
            pc->next=pa;
            pc=pa;
            pa=pa->next;
        }
        else{
            pc->next=pb;
            pc=pb;
            pb=pb->next;
        }
    }
    pc->next=pa?pa:pb;
    free(Lb);
}
