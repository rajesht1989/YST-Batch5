//write a program to divide 3 nos and print it on console
#include<stdio.h>
int divide(int a,int b,int c){
    return a/b/c;
}
void main(){
    int d=divide(10,5,1);
    printf("%d",d);
}
