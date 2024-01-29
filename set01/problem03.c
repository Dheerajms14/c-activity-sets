#include<stdio.h>

int input()
{
    int x;
    printf("Enter the numbers");
    scanf("%d",&x);
    return x;
}

int add(int a,int b)
{
    int sum;
    sum = a + b;
    return sum;
}

void output(int a,int b,int c)
{
    printf("The sum of %d and %d is %d",a,b,c);
}

int main(){
int a,b,c;
a=input();
b=input();
c= add(a,b);
output(a,b,c);
return 0;
}


