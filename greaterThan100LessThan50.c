//write a program to get a number from user and identify it is greater than 50 and lesser than 100
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void greaterThan(int a){
    if(a>50&&a<100){
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
