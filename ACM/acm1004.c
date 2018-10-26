#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char a[1000][1000];
    //while(cin>>n&&n)
    // while(~scanf("%d",&n)&&n)
    while(scanf("%s",&n)!=EOF&&n)
    {
        int i,j=0;
        int max,sum=0;
        int k=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(strcmp(a[i],a[j])==0)
                {
                    sum++;
                }
                if(sum>max)
                {
                    max=sum;
                    k=i;
                }
            }

        }
         printf("%s\n",a[k]);

    }
    return 0;
}
