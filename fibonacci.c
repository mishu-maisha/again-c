#include<stdio.h>
int fib(int n);
int main (){
   //fibonacci using iteration

     int n,t1=0,t2=1,nextnum,sum=0;
     printf("Enter an integer:\n");
     scanf("%d",&n);

     printf("Fibonacci series:\n");

     for(int i=1;i<=n;i++){
        printf("%d ",t1);
          sum+=t1;
        nextnum=t1+t2;
        t1=t2;
        t2=nextnum;

     }
     printf("Sum:%d",sum);
     return 0;

}
