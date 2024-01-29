//2. Write a C program to add two numbers.
#include<stdio.h>
int main(){
    int a, b, sum;
    printf("Enter the two numbers");
    scanf("%d,%d",&a,&b);
    sum = a+b;
    printf("The sum of two numbers is %d+%d is %d",a,b,sum);
    return 0;
}

