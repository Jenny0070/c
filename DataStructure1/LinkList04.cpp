
#include<stdio.h>

    #include<stdlib.h>

    typedef struct node

    {

      int data;

      struct node *next;

    }*LinkedList;



    LinkedList LinkedListCreateTailL(int a[8])

    {

      LinkedList p, L, tail;

      int i=0;

      L=(struct node*)malloc(sizeof(struct node));

      tail=L;



      for(i=0; i<8; i++)

      {

        p=(struct node*)malloc(sizeof(struct node));

        p->data=a[i];

        tail->next=p;

        tail=p;

      }

      tail->next=NULL;

      return L;

    }



    void LinkedListPrint(LinkedList L)

    {

      LinkedList p;

      p=L->next;

      while(p!=NULL)

      {

        printf("%d ",p->data);

        p=p->next;

      }

    }



    int main()

    {

      int a[8], i;

      LinkedList L;

      printf("请输入8个列表元素，以回车结束：\n");

	  for(i=0; i<8; i++)

      {

        scanf("%d", &a[i]);

      }



      L=LinkedListCreateTailL(a);

      LinkedListPrint(L);
      return 0;

    }

