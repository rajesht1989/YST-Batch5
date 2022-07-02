#include<stdio.h>  
 int main() {
int a=10;
int b=12;
swapAndPrint(a,b);
}
void swapAndPrint(int a, int b){
 int temp=a;
 a = b;
 b = temp;
 printf("swap is a = %d b=%d",a,b);
 }
