#include<stdio.h>
int main (){

    int i,n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);

    printf("Series:\n");
    for(i=1;i<=n;i++){
        printf("%d ",i);
        sum+=i;
        if(n!=i){
            printf("+ ");
        }
    }
    printf("\n");
    printf("Sum:%d\n",sum);

    return 0;
}
