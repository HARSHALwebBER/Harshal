#include<stdio.h>
#include<conio.h>
int main(){
    int a, *P;
    printf("enter the number of a: \n");
    scanf("%d",&a);
    P=&a;
    printf("%d",*P);
    return 0;
}