//write a program factorial number print it on console.
#include<stdio.h>
int getNumber(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
int identifyFactorial(int n){
    int f = 1;
    for(int i = 1;i <= n;i++){
        printf("%d",i);
        f = f * i;
    }
    return f;
}
int main(){
    int number = getNumber();
    int factorial = identifyFactorial(number);
    printf("Factorial is %d\n",number);
    printf("Factorial is %d",factorial);
}
