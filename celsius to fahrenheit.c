#include<stdio.h>
int main(){
    int c, f;
    printf("Enter your temperature in Celsius scale: ");
    scanf("%d", &c);
    f = ((c/5)*9)+32;
    printf("Temperature in Fahrenheit scale: %d", f);
    return 0;
}
