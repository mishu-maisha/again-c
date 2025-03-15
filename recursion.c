#include<stdio.h>
int fact(int n);
int main (){
   //factorial using recursion

     int n;
     printf("Enter an integer:\n");
     scanf("%d",&n);
      printf("Factorial of %d is %d",n,fact(n)) ;

    return 0;
}
int fact(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int fact1=fact(n-1);
    int fact2=n*fact1;
    return fact2;
}
