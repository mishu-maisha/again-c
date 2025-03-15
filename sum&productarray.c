#include<stdio.h>
int main (){
     //summation & multiplication of two arrays
     int n,i,sum=0,product=1;

    printf("Enter n of arrays: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    printf("Sum: %d\n",sum);
       printf("Product: %d\n",product);

    return 0;
}
