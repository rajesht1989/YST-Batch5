//write a program get two number fro user and use relational operators and print it on console  

#include <stdio.h>

int getNumberFromUser(){
int number;
scanf("%d",&number);
return number;
}
int equalOrWhat(int a,int b){
return a==b;
}
int greaterthanOrWhat(int a,int b){
return a>b;
}
int lessthanOrWhat(int a,int b){
return a<b;
}
int greaterthanOrEqual(int a,int b){
return a>=b;
}
int lessthanOrEqual(int a,int b){
return a<=b;
}
int notEqualOrWhat(int a,int b){
return a!=b;
}
int main(){
printf ("Enter The First Number : ");
int a=getNumberFromUser();
printf ("Enter The Second Number : ");
int b=getNumberFromUser();

int equal=equalOrWhat(a,b);
int greaterthan=greaterthanOrWhat(a,b);
int lessthan=lessthanOrWhat(a,b);
int greaterThanOrEqual=greaterthanOrEqual(a,b);
int lessThanOrEqual=lessthanOrEqual(a,b);
int notEqual=notEqualOrWhat(a,b);

printf("\nEqual Or What %d",equal);
printf("\nGreaterthan Or What %d",greaterthan);
printf("\nLessthan Or What %d",lessthan);
printf("\nGreaterthan Or Equal %d ",greaterThanOrEqual);
printf("\nLessthan Or Equal %d ",lessThanOrEqual);
printf("\nNot Equal Or What %d ",notEqual);
    return 0;
 }
