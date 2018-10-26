#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length,times;
    scanf("%d%d",&length,&times);
    int a[length];
    int i,j,temp;
    for(i=0;i<length;i++)
    {
        scanf("%d",&a[i]);
    }
    //Ã°ÅÝ
    for (i=0;i<times;i++)
    {
        for(j=0;j<(length-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
    for(i=0;i<length-1;i++)
    {
        printf("%d ",a[i]);
    }
    if(i==length-1)
        //Á½¸öµÈºÅ
    {
        printf("%d",a[i]);
    }
    return 0;
}
