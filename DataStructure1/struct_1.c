#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[200];
    int age;
};
void f(struct Student *stu);
void g(struct Student stu);//�������ڴ�
void g2(struct Student *stu);//ֻ��ָ��,��Լ�ڴ�
int main()
{
   struct Student stu;
   f(&stu);
   g2(&stu);
   //g(stu);
   //printf("%d %s %d\n",stu.id,stu.name,stu.age);
   return 0;
}

void f(struct Student *stu)
{
    stu->id=99;
    strcpy((*stu).name,"zhangSan");
    (*stu).age=10;

}
void g(struct Student stu)
{
    printf("%d %s %d\n",stu.id,stu.name,stu.age);//�ṹ�������ȡ��Ա�ķ�ʽ
}
void g2(struct Student *stu)
{
    printf("%d %s %d\n",stu->id,stu->name,stu->age);//�ṹ��ָ�������ȡ��Ա�ķ�ʽ
}
