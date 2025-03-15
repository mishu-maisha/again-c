#include <stdio.h>
#include<math.h>
#define PI 3.1416
int main (){
    //area and perimeter of a circle
     double radius,area,perimeter;

     printf("Enter the radius of the circle:");
     scanf("%lf",&radius);

     area=PI*pow(radius,2);
     perimeter=2*PI*radius;
     printf("Area is %.2lf\n",area);
     printf("Perimeter is %.2lf",perimeter);

     return 0;
}
