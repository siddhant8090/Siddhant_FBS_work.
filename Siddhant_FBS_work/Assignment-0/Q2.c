#include<stdio.h>
int main(){
    float r;
    const float pi = 3.14;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    float area = pi * r * r;
    printf("Area of the circle = %.f", area);
    return 0;
}