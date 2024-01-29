#include<stdio.h>

int input()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    return num;
}

int compare(int a ,int b,int c){
    int lar = a;

    if(b>lar){
        lar = b;
    }

    if(c>lar){
        lar = c;
    
    }

    return lar;
}

void output(int a, int b, int c, int lar ){
    printf("the sum %d and  %d is %d",a,b,c);
}

int main(){
    int num1,num2,num3,lar;
    num1=input();
    num2=intput();
    num3=input();
    lar=compare(num1,num2,num3);
    output(num1,num2,num3,lar);
    return 0;

}
