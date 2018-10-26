#include <stdio.h>
#include <stdlib.h>

#define ERROR -1
typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode List;

List Read();

ElementType FindKth( List L, int K );

int main()
{
    //freopen("in.txt","r",stdin);
    int N, K;
    ElementType X;
    List L = Read();

    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &K);
        X = FindKth(L, K);
        if ( X!= ERROR )
            printf("%d ", X);
        else
            printf("NA ");
    }
    return 0;
}
List Read()     //尾插法
{
    int num = 0;
    scanf( "%d",&num );
    List list = ( List )malloc( sizeof( struct LNode ) );
    list->Next = NULL;      //生成链表
    list->Data = num;
    List last = list;       //生成指向表尾的指针
    while( scanf( "%d",&num )==1&&(num!=-1)){
        PtrToLNode node = ( List )malloc( sizeof( struct LNode ) );//生成新节点
        node->Data = num;
        node->Next = NULL;
        last->Next = node;      //将新节点插入表尾
        last = node;            //表尾指针指向新节点
    }
    return list;

}
ElementType FindKth( List L, int K ){
    if(L==NULL) return ERROR;
    while(--K){                         //往后移动K-1次,查找第K个元素
        if(L->Next==NULL) return ERROR; //若K大于链表的长度，返回ERROR
        else L=L->Next;
    }
    return L->Data;                     //返回第K个元素
}

