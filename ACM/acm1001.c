
/**
#include<stdio.h>
int main(void){
    int m,i;
    int sum=0;
    while(scanf("%d",&m)!=EOF){
        for(i=0;i<=m;i++)
            sum+=i;
         printf("%d\n\n",sum);
    }
    return 0;
    }
 */
 #include <stdio.h>
int main()
{
    int i,n;
    int sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=0;
        for(i=0;i<=n;i++)
        sum+=i;
        printf("%d\n\n",sum);
    }
    return 0;
}
