//write a program to get a number from user and identify it is lesser than 20 or greater than 10
#include<stdio.h>
int getNumberFromUser(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
void greaterThanTenOrLessThanTwenty(int a){
    if(a>10){
        printf("The given number is Greater than 10");
    }
    else if(a<20){
        printf("The given number is lesser than 20");
    }
    else{
        printf("the given number is equal");
    }
}
void main(){
    int n=getNumberFromUser();
   greaterThanTenOrLessThanTwenty(n);
}
