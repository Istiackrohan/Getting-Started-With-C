#include<stdio.h>
int main (){
    // Area of a Triangle while base and height are given.
    int base, height, area;
    printf("Enter the base & height:\n");
    scanf("%d %d", &base, &height);
    area = 0.5*base*height;
    printf("Triangle's area is:%d", area);
return 0;
}
