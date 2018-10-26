#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[200];
    int age;
};
void f(struct Student *stu);
void g(struct Student stu);//传整块内存
void g2(struct Student *stu);//只传指针,节约内存
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
    printf("%d %s %d\n",stu.id,stu.name,stu.age);//结构体变量获取成员的方式
}
void g2(struct Student *stu)
{
    printf("%d %s %d\n",stu->id,stu->name,stu->age);//结构体指针变量获取成员的方式
}
