#include <stdio.h>
typedef struct{
    int data[100];
    int length;
}Seqlist;
/*定义Seq这个新的数据类型*/
void creat(Seqlist &L);
void show(Seqlist L);
int main()
{
    Seqlist L;
    L.length=0;
    creat(L);
    show(L);
    return 0;
}
void creat(Seqlist &L)
{
    int a;
    printf("请输入要创建的元素的个数:\t");
    scanf("%d",&a);
    int i;
    for(i=0;i<a;i++)
    {
        printf("请输入第%d个元素\t",i+1);
        scanf("%d",&L.data[i]);
        L.length++;
    }
}
void show(Seqlist L)
{
    int i;
    printf("线性表中的元素为:\n");
    for(i=0;i<L.length;i++)
    printf("%d\t",L.data[i]);
    printf("\n");
}
