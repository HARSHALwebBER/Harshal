#include<stdio.h>
void calculator(float value);
int main (){
    float value;
    calculator(value);
    return 0;

}
void calculator(float value){

    printf("enter the value: \n");
    scanf("%f",&value);
    value = value+(0.18 * value);
    printf("the value is: %f",value);
}