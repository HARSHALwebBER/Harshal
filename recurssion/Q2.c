#include<stdio.h>
int fact(int n);
int main(){
    printf("fact is: %d", fact(5));
    return 0;
}
int fact (int n){
    if(n==1){
    return 1;
}
int fact_of_1= fact(n-1);
int factN= fact_of_1*n;
return factN;
}