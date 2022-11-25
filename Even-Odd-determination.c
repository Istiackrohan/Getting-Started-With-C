#include<stdio.h>
int main (){
    int x;
    printf("Enter the code you want to check if it is even or odd: ");
    scanf("%d", &x);
    x%2==1 ? printf("The number is Odd") : printf("The number is Even");
return 0;
}