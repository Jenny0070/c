#include<stdio.h>
#include<stdlib.h>

int main()
{
    int M, N, i;
    int remainer = 0;
    int flag = 0;
    scanf("%d %d ",&N, &M);
    for(i = 1; i <= N; i ++) {
        char c;
        while((c = getchar()) != '\n') {
            if(c == 'S') {
                remainer++;
                if(remainer > M)
                    flag = 0;
            }
            else if(c == 'X') {
                remainer--;
                if(remainer < 0)
                    flag = 0;
            }
        }
        if(remainer == 0 && flag == 1)
            printf("YES");
        else
            printf("NO");
        remainer = 0;
        flag = 1;
    }
    return 0;
}
