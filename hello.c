#include <stdio.h>
int main() {
     char num;
     printf("Please enter a char: ");
     scanf("%c", &num);
     printf("%d", (num>=48&&num<=58));
}
