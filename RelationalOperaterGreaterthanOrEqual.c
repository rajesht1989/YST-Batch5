// write a program that users relational operators.
#include<stdio.h>
int getNumberFromUser(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    return a;
}
int greaterthanEqualOrWhat(int a,int b){
    return a >= b ;
}
void main (){
    int a = getNumberFromUser();
    int b = getNumberFromUser();
    int greaterthanEqual=greaterthanEqualOrWhat(a,b);
    printf("greaterthanEqual is %d",greaterthanEqual);

}
