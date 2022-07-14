//write a program to get a number from user and find  it is divisible by 10
#include<stdio.h>
int getNumber(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    return n;
}
void divisibleByTen(int n){
    if(n% 10 == 0){
        printf("Divisible by ten");
    }
        else{
            printf("Not Divisible by ten");
        }
    }
void main(){
    int n = getNumber();
     divisibleByTen(n);
    
}
