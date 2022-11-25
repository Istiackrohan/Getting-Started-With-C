#include<stdio.h>
int main (){
    int length, width, area;
    printf("Enter the value of length & width like length width:");
    scanf("%d %d",&length, &width);
    area = length*width;
    printf("Area of Rectangle is: %d", area);
    return 0;
}