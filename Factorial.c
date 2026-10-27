#include<stdio.h>
int factorial(int n){
    if(n==0||n==1){
        return n;
    }
    return n*factorial(n-1);
}
int main(){
    int rec;
    rec=factorial(3);
    printf("%d",rec);
}