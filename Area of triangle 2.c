#include<stdio.h>
int main () {
    // Area of a triangle with help of the value of three sides.
    int a, b, c, s, area;
    printf("Enter the values of sides like a b c:\n");
    scanf("%d %d %d", &a, &b, &c);
    s = (a+b+c);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of your triangle is: %d", area);
    return 0;
}
