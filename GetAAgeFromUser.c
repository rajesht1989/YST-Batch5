//write a program to get age from user and identity if the person is eligible for vote or not
#include <stdio.h>
int getAge(){
    int a;
    printf ("please enter the age" );
    scanf ("%d",&a);
    return a;
}
int isVoter(int a){
    a>18? printf("voter"): printf("not voter");
}
void main(){
    isVoter(getAge());
}
