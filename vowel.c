#include <stdio.h>
#include<string.h>
#include<ctype.h>
int fib(int n);
int main (){
    //string vowel.consonent
     char str[100],vowel=0,consonent=0;
      printf("Enter a string:\n");
      fgets(str,sizeof(str),stdin);

      for(int i=0;str[i]!=0;i++){
        char ch=tolower(str[i]);
        if(ch>='a' && ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u'){
                vowel++;
            }
            else{
                consonent++;}

      }
      }
      printf("Vowels:%d\n",vowel);
      printf("Consonents:%d\n",consonent);



        return 0;

}
