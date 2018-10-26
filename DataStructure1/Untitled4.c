#include <stdlib.h>
#include <stdio.h>
int N,M;

char a[101];
int main()
{
	scanf("%d%d",&N,&M);
	for(int i=1;i<=N;i++)
	{
		scanf("%s",a);
		int flag=1;

		int len=strlen(a);

		int t=0;

		for(int i=0;i<len;i++)

		{

			if(a[i]=='S')

			{

				if(t==m)

				{

					flag=0;

					break;

				}

				else

					t++;

			}

			else

			{

				if(t==0)

				{

					flag=0;

					break;

				}

				else

					t--;

			}



		}

		if(t!=0)

			ans=0;

		if(ans)

			printf("YES\n");

		else

			printf("NO\n");

	}

	return 0;

}

