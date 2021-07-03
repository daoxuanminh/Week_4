#include<stdio.h>
#include<math.h>
#define pi 3.14

 int main(){
 	double radius;
 	scanf("%lf", &radius);
 	printf("CIRCLE:\n");
 	double a = radius*radius*pi;
 	double p =2*radius*pi;
 	printf("Area: %.2f\nCircumference: %.2f\n",a, p);
 	a= radius*radius*pi*4;
 	p = 4.0/3.0* pow(radius,3);
 	printf("SPHERE: \n");
    printf("Area: %.2f\nCircumference: %.2f\n",a, p);
 	return 0;
 }  
 
