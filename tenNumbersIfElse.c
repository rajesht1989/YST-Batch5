//write a program to get ten number from user print it on console.
   #include<stdio.h> 
    int getNumberFromUser(){
    int number;
    printf("Enter a number");
    scanf("%d",& number);
    return number;
}
void tenNumber(int A){
   

if(A==1){
    printf("one");
}
else if(A==2){
    printf("Two");
}
else if(A==3){
    printf("Three");
}
else if(A==4){
    printf("Four");
}
else if(A==5){
    printf("Five");
}
else if(A==6){
    printf("Six");
}
else if(A==7){
    printf("Seven");
}
else if(A==8){
    printf("Eight");
}
else if(A==9){
    printf("Nine");
}
else if(A==10){
    printf("Ten");
}
else {
    printf("Not Need");
}
}
void main(){
     int A=getNumberFromUser();
    tenNumber(A);
}
