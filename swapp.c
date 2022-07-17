#include<stdio.h>
int main(){
    int a=5;
    int b=6;
    swappAndPrint(a,b);

void swappAndPrint(a,b){
int temp=b;
b=a;
a=temp;
printf("Swapp and print a=%db=%d",a,b);
}
