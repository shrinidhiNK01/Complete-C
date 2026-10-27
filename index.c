#include<stdio.h>
int main(){
    printf("Hello, World!");
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        printf("%d ", i);
    }
    printf("\nSize of integer: %lu bytes\n", sizeof(int));
    return 0;
}