//write a program to get number from user and print color
#include<stdio.h>
int getNum(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    return a;
}
void printColor(int a,int b,int c){
    if(a==255,b==00,c==0){
        printf("color is Red");
    }
    else if(a==0,b==255,c==0){
        printf("Color is Lime");
    }
    else if(a==0,b==0,c==255){
        printf("Color is Blue");
    }
     else if(a==255,b==0,c==255){
        printf("Color is Magenta");
    } 
    else if(a==0,b==255,c==255){
        printf("Color is Cyan");
    }
     else if(a==0,b==0,c==0){
        printf("Color is black");
    }
     else if(a==255,b==255,c==255){
        printf("Color is White");
    }
    else{
        printf("Invalid");
    }
}
void main(){
    int a=getNum();
    int b=getNum();
    int c=getNum();
    printColor(a,b,c);
}
