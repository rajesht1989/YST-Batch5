//write a program to get a number from user and identify it is greater than 10 and lesser than 20
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void greaterThan(int a){
    if(a>10&&a<20){
        printf("Yes");
    }
        else{
            printf("No");
            
    }
}
void main(){
    int a=getNum();
    greaterThan(a);
}
