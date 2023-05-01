#include<stdio.h>
void calculator(float value);
int main (){
    float value = 100.0;
    calculator(value);
    return 0;

}
void calculator(float value){
    value = value+(0.18 * value);
    printf("the value is: %f",value);
}