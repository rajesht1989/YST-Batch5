#include<stdio.h>
int sub(int a,int b ,int c){
    return a-b-c;
}
void main(){
    int d=sub(500,200,100);
    printf("%d",d);
}
