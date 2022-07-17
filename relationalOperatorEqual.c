// write a program that users relational operators.

#include<stdio.h>
int getNumberFromUser(){
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    return a;
}
int equalOrWhat(int a,int b){
    return a == b ;
}
int main (){
    int a = getNumberFromUser();
    int b = getNumberFromUser();
    int equal = equalOrWhat(a,b);
    printf("Equal is %d",equal);

}
