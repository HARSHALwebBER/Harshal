#include<stdio.h>
void namaste();
void bonjoure();

int main(){
    printf("enter i if you are indian or f for Frenchie:");
    char ch;
    scanf("%c", &ch);

if(ch == 'i'){
     namaste();
} else{
     bonjoure();
}
return 0;
}
 void namaste(){
    printf("Namaste\n");
 }
 void bonjoure(){
    printf("Bonjoure\n");
 }