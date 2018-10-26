#include<stdio.h>
#include<stdlib.h>

int main(){
    int casenum=0;
    scanf("%d\n",&casenum);
    /*int caseA[casenum-1];*/
    int i=0;
    for(i=0;i<casenum;casenum++){
        printf("Case %d : ",i);
        int num;
        scanf("%d\n",&num);
        int a[num];
        int j;
        int sum[num];
        int sumInt=0;
        for(j=0;j<num;j++){
            scanf("%d",&a[j]);
            sumInt+=a[j];
            sum[j]=sumInt;
        }
        int max=sum[0];
        int maxIndex=0;
        for(j=0;j<num;j++){
            if(a[j]>max){
                max=a[j];
                maxIndex=j;
            }


        }
        printf("%d %d %d ",sumInt,1,maxIndex+1);

    }

    return 0;
}
