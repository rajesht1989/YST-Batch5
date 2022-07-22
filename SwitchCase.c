#include<stdio.h>
int getNum(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    return a;
}
void age(int a){
    switch (a){
        case 1:
        case 2:
        case 3:
        printf("Infant");
        break;
        case 4:
        case 5:
        printf("Kid");
        break;
        default:
        printf("Man");
        break;
    }
}
    void main(){
        int a=getNum();
        age(a);
    }
