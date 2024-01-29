#include<stdio.h>

int input(){
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    return 0;

}
void compare(int a,int b, int c,int *largest)
{
    if(a>=b &&a>=c)
    {
        *largest=a;
    }
    if(b>=a &&b>=c)
    {
        *largest=b;
    }
    else
    {
        *largest=c;
    }
}
void output(int a,int b,int c, int *largest)
{
    printf("the sum of %d %d %d is %d",a,b,c,*largest);
}

int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    campare(a,b,c,&largest);
    output(a,b,c,&largest);
    return 0;
}