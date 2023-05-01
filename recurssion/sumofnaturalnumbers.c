#include<stdio.h>
int sum_of_num(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sum_of_num(n-1);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int ans= sum_of_num(num);
    printf("The result is %d",ans);
    return 0;
}