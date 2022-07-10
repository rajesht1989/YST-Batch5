//write a program to get a number from user and identify it is equal to 19
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void greaterThan(int a){
    if(a==19){
        printf("Equal");
    }
    else{
        printf("The given number is not equal to 19");
    }
}
void main(){
    int a=getNum();
    greaterThan(a);
}
