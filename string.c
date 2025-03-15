#include <stdio.h>
#include<string.h>
int fib(int n);
int main (){
    //string length
     char str[100];
     int length;

     printf("Enter a string:\n");
     fgets(str,sizeof(str),stdin);
     length=strlen(str)-1;
     printf("String length is:%d",length);



        return 0;


        