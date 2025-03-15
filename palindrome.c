#include <stdio.h>
int main (){
    //checking palindrome
    int num,reversed=0,remainder,original;
    printf("Enter an integer:");
    scanf("%d",&num);

    original=num;
    while(num!=0){
        remainder=num%10;
        reversed=reversed*10+remainder;
        num=num/10;

    }
    if(original==reversed){
        printf("%d is palindrome",original);
    }
    else{
        printf("%d is not  palindrome",original);
    }
    return 0;
}
