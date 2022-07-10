//write a program to get a number from user and identify it is greater than 5
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void greaterThan(int a){
    if(a>5){
        printf("The given number is Greater than five");
    }
    else if(a<5){
        printf("The given number is not Greater than five");
    }
    else{
        printf("Equal");
    }
}
void main(){
    int a=getNum();
    greaterThan(a);
}
