//write  program that uses relational operators 
#include<stdio.h>
int getANumberFromUser(){
int k;
printf("enter a value");
scanf("%d",&k);
return k;
}
int greaterOrWhat(int k,int l){
return l<k;
}
int main(){
    int k =getANumberFromUser();
    int l=getANumberFromUser();
    int greater=greaterOrWhat(l,k);
    printf("greater %i",greater);

}

