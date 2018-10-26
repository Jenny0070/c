#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10000
int a[MAXSIZE];
int main()
{
    int size,move;
    scanf("%d %d", &size, &move);
    int i,j;
    for (i=0;i<size;i++)
    {
        scanf("%d\n",&a[i]);
    }

    move = move % size;

	int flag=0;
	for( i=move+1;i<=size;i++)
	{
		flag++;
		if(flag==size)
			printf("%d\n",a[i]);
		else
			printf("%d ",a[i]);
	}
	for(i=1;i<=m;i++)
	{
	    flag++;
		if(flag==size)
			printf("%d\n",a[i]);
		else
			printf("%d ",a[i]);
	}
	return 0;
}

