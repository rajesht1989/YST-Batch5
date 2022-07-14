//write a program to print prime numbers below 20
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter the Number only below 20 : ");
    scanf("%d",&a);
    return a;
}
void printPrimeNum(int a){
    if(a==2){
        printf("Prime Number");
    }
    else if(a==3){
        printf("Prime Number");
    }
    else if(a==5){
        printf("Prime Number");
    }
    else if(a==7){
        printf("Prime Number");
    }
    else if(a==11){
        printf("Prime Number");
    }
    else if(a==13){
        printf("Prime Number");
    }
    else if(a==17){
        printf("Prime Number");
    }
    else if(a==19){
        printf("Prime Number");
    }
    else{
        printf("Its not prime number");
    }
}
void main(){
    int a=getNum();
    printPrimeNum(a);
}
