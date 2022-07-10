//write a program to get a number from user and identify it is lesser than 100
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void greaterThan(int a){
    if(a>100){
        printf("The given number is not lesser than 100");
    }
    else if(a<100){
        printf("The given number is lesser than 100");
    }
    else{
        printf("Equal");
    }
}
void main(){
    int a=getNum();
    greaterThan(a);
}
