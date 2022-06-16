//write a program to subtract 3 nos and print it on console
#include<stdio.h>
int subtract(int a,int b,int c){
    return a-b-c;
}
void main(){
    int d=subtract(10,3,5);
    printf("%d",d);
}
