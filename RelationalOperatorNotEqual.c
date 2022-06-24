// write a program that users relational operators.
#include<stdio.h>
int getNumberFromUser(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    return a;
}
int notEqualOrWhat(int a,int b){
    return a /= b ;
}
void main (){
    int a = getNumberFromUser();
    int b = getNumberFromUser();
    int notEqual=notEqualOrWhat(a,b);
    printf("notEqual is %d",notEqual);

}
