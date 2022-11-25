#include<stdio.h>
int main (){
    int T, N, i;
    printf("Enter how many value you want check: ");
    scanf("%d", &T);
    for (i=0; i<T; i++) {
        printf("Enter the value you want check: ");
        scanf("%d", &N);
        N%2==0 ? printf("Even\n") : printf("Odd\n");
    }
    return 0;
}
