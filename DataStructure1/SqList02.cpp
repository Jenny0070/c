#include <stdio.h>
#include<stdlib.h>

#define MAXSIZE 100
#define OK 1
#define ERROR 0

typedef int Status;
typedef int ElemType;

typedef struct
{
    ElemType data[MAXSIZE];
    ElemType length;
}SqList;

void creat(SqList &L)
{
    int num=0;
    printf("������Ҫ������Ԫ�صĸ���:\t");
    scanf("%d",&num);
    int i=0;
    for(i=0;i<num;i++)
    {
        printf("�������%d��Ԫ�أ�",i+1);
        scanf("%d",&L.data[i]);
        L.length++;

    }

}

void show(SqList L)
{
    int i=0;
    for(i=0;i<L.length;i++)
    {
        printf("���Ա��е�%d��Ԫ��Ϊ��",i+1);
        printf("%d\t",L.data[i]);
        printf("\n");


}
}
void creat(SqList &L);
void show(SqList L);
main()
{
    SqList L;
    L.length=0;
    creat(L);
    show(L);


}
