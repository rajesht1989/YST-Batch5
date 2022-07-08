//write a program to get number from user and print hollowed right triangle
#include<stdio.h>
int getNum(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    return n;
}
void printTriangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1|| i==j || i==n ){  
            printf("*\t");  
        }  
        else{
        printf("\t");  
        }
        }  
        printf("\n");  
        
    }  
}
void main(){
    int n=getNum();
    printTriangle(n);
}
