#include <stdio.h>
typedef struct{
    int data[100];
    int length;
}Seqlist;
/*����Seq����µ���������*/
/*
void creat(Seqlist &L);
void show(Seqlist L);
*/

void creat(Seqlist &L)
{
    int a;
    printf("������Ҫ������Ԫ�صĸ���:\t");
    scanf("%d",&a);
    int i;
    for(i=0;i<a;i++)
    {
        printf("�������%d��Ԫ��\t",i+1);
        scanf("%d",&L.data[i]);
        L.length++;
    }
}
void show(Seqlist L)
{
    int i;
    printf("���Ա��е�Ԫ��Ϊ:\n");
    for(i=0;i<L.length;i++)
    printf("%d\n",L.data[i]);
    printf("\n");
}
int main()
{
    Seqlist L;
    L.length=0;
    creat(L);
    show(L);
    return 0;
}
