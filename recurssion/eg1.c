#include<stdio.h>
void Helloworld(int count);
int main(){
    Helloworld(5);
return 0;
}
void Helloworld(int count){
    if(count==0){
        return;
    }
    printf("Hello World\n");
    Helloworld(count-1);
}