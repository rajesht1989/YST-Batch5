// Write a program to get number of subjects and the correspning marks and find the average using array.
#include <stdio.h>
int getNum() {
    int i;
    scanf("%d", &i);
    return i;
}
int getMarksAndFindAverage() {
    printf("Enter number of Subjects :");
    int n = getNum();
    int marks[n];
    for (int i = 0; i < n; i++) {
    printf("Enter number the Subject mark %d = ", i + 1);
    marks[i] = getNum();
    }
    int total = 0;
    for (int i = 0; i < n; i++) {
     total = total + marks[i];
     return total/n;
    }
}
void main() {
    printf("The average is %d ", getMarksAndFindAverage());
}
