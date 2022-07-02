//write a program to swap two valus and print it on console
#include<stdio.h>
int main(){
    int a=10;
    int b=100;
    swap(a,b);
}
void swap(int a,int b){
    int temp=b;
    b=a;
    a=temp;
    printf("Swapped values are %d %d",a,b);
}
