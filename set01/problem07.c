#include<stdio.h>
int input_n(){
    int num;
    printf("Enter the positive integer");
    scanf("%d",&num);
    return num;
}

int sum_n_nos(int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum += i; 
    }
    return sum;
}

void output(int n,int sum){
    printf("the sum of all natural num from 1 to %d is %d\n",n,sum);
}

int main(){
    int n,sum;
    n=input_n();
    sum= sum_n_nos(n);
    output(n,sum);
    return 0;
}