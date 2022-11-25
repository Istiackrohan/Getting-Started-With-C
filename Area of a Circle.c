#include<stdio.h>
int main(){
    int r;
    float pi, area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    pi = 3.141592;
    area = pi*r*r;
    printf("Area of the circle is: %f", area);
    return 0;
}
