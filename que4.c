#include<stdio.h>
int main()
{
    float radius,area,circumference;
    printf("enter value of radius :");
    scanf("%f",&radius);
    float pi=3.14;
    area=pi*radius*radius;
    circumference=2*pi*radius;
    printf("area of circle :%f\n",area);
    printf("circumference of circle :%f\n",circumference);
    return 0; 
 }