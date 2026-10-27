#include<stdio.h>
int sum(int a, int b){
    return a+b;

}
int main(){
    int a,b,c;
    printf("Enter Your first number:");
    scanf("%d",&a);
    printf("Enter Your second number:");
    scanf("%d",&b);
    c=sum(a,b);
    printf("%d",c);
}