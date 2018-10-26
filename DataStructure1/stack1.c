#include <stdio.h>
#include <stdlib.h>

#define ERROR 1e8
typedef int ElementType;
typedef enum { push, pop, end } Operation;
typedef enum { false, true } bool;
typedef int Position;
struct SNode {
    ElementType *Data;
    Position Top1, Top2;
    int MaxSize;
};
typedef struct SNode *Stack;

Stack CreateStack( int MaxSize );
bool Push( Stack S, ElementType X, int Tag );
ElementType Pop( Stack S, int Tag );

Operation GetOp();  /* details omitted */
void PrintStack( Stack S, int Tag ); /* details omitted */

int main()
{
    int N, Tag, X;
    Stack S;
    int done = 0;

    scanf("%d", &N);
    S = CreateStack(N);
    while ( !done ) {
        switch( GetOp() ) {
        case push:
            scanf("%d %d", &Tag, &X);
            if (!Push(S, X, Tag)) printf("Stack %d is Full!\n", Tag);
            break;
        case pop:
            scanf("%d", &Tag);
            X = Pop(S, Tag);
            if ( X==ERROR ) printf("Stack %d is Empty!\n", Tag);
            break;
        case end:
            PrintStack(S, 1);
            PrintStack(S, 2);
            done = 1;
            break;
        }
    }
    return 0;
}

typedef int ElementType;
typedef enum { push, pop, end } Operation;
typedef enum { false, true } bool;
typedef int Position;
struct SNode {
    ElementType *Data;
    Position Top1, Top2;
    int MaxSize;
};
typedef struct SNode *Stack;

Stack CreateStack( int MaxSize )
{
    Stack S=(Stack)malloc(sizeof(struct SNode));
    S->MaxSize=MaxSize;
    S->Top1=-1;
    S->Top2=MaxSize-1;
    S->Data=(ElementType*)malloc(sizeof(ElementType)*MaxSize);
    retuen S;
}
bool Push( Stack S, ElementType X, int Tag )
{
    if(S==NULL)
    {
        return false;
    }
    else if(S->Top1==S->Top2-1)
    {
        printf("Stack Full");
        return false;
    }
    else if(1==Tag)
    {
        S->Data[++S->Top1]=X;
        return ture;
    }
    else if(2==Tag)
    {
        S->Data[--S->Top2]=X;
        return true;
    }
ElementType Pop( Stack S, int Tag )
{
    if(S==NULL)
    {
        return ERROR;
    }
    else if(1==Tag)
    {
        if(-1==S->Top1)
        {
            printf("Stack %d Empty", Tag);
            return ERROR;
        }
        else
        {
            return S->Data[S->Top1--];
        }
    }
    else if(S->Top2 == (S->MaxSize)-1)
    {
        printf("Stack %d Empty", Tag);
        return ERROR;
    }
    return S->Data[S->Top2++];

}

