//write a program to get a number from user and find if it is divisible by 10
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    return a;
}
void divisibleByTen(int a){
    if(a % 10 == 0){
        printf("Divisible");
    }
        else{
            printf("Not Divisible");
        }
    }
void main(){
    int a = getNum();
     divisibleByTen(a);
    
}
