#include<stdio.h>
float squarearea(float side);
float circlearea(float radi);
float rectanglearea(float a, float b);
int main(){
 float a=5.0;
 float b=10.0;
 float side=15.0;
 float radi=11.0;
 printf("area is : %f\n",rectanglearea(a,b));
 printf("area is : %f\n",circlearea(radi));
 printf("area is :%f\n", squarearea(side));
 return 0;
}

float squarearea(float side){
    return side*side;
}
float circlearea(float radi){
    return 3.14* radi*radi;
}
float rectanglearea(float a, float b){
    return a*b;

}