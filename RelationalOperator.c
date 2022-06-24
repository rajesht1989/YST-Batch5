//write a program that uses relational operator and print it on console
#include<stdio.h>
void main(){
    int a= getAValue();
    int b= getAValue();
    int c= findEqual(a,b);
    printf("( 0 means false and 1 means ) >>> %i",c);
}



int getAValue(){
    int a;
    printf("Enter a value : ");
    scanf("%i",&a);
    return a;
}
int findEqual(int a,int b){
    return a==b;
}
