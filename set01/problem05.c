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
    printf("the sum %d %d %d is %d",a,b,c,lar);
}

int main(){
    int a,b,c,lar;
    a=input();
    b=input();
    c=input();
    lar=compare(a,b,c);
    output(a,b,c,lar);
    return 0;

}
