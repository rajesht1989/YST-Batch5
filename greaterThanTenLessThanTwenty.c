//write a program to get a number from user and identify it is greater than 10 and lesser than 20
#include<stdio.h>
int getNum(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
void greaterThan(int n){
    if(n>10&&n<20){
        printf("Yes");
    }
        else{
            printf("No");
            
    }
}
void main(){
    int n=getNum();
    greaterThan(n);
}
