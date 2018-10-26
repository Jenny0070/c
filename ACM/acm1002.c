#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n=0;
    int i,j,k=0;
    int r=0;
    char A[1000];
    char B[1000];
    char C[1001];

    while(scanf("%d\n",&n)!=EOF){
        scanf("%s",&A);
        scanf("%s",&B);
        int lengthA=strlen(A);
        int lengthB=strlen(B);

        for (i = lengthA-1,j=lengthB-1; i >=0&&j>=0; i--,j--){
		int p = (A[i] - '0') + (B[j] - '0') + r;
		r = p / 10;
		C[k++] = p % 10;
	    }
        while (i>=0){
            int p = (A[i] - '0') + r;
            r = p / 10;
            C[k++] = p % 10;
            i--;
        }
        while (j >= 0)
        {
            int p = (A[j] - '0') + r;
            r = p / 10;
            C[k++] = p % 10;
            j--;
        }
        for (i = k - 1; i >= 0; i--)
        {
            printf("%d", C[i]);

        }
    }
    return 0;
    }
