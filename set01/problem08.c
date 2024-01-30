#include<stdio.h>
int input_array_size(){
    int n;
    printf("Enter the array size");
    scanf("%d",&n);
    return n;

}
void input_array(int n, int a[n]){
    printf("Enter the arrays\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }


}
int sum_n_array(int n, int a[n]){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    return sum;
}

void output(int n, int a[n],int sum){
    printf("%d",a[0]);
    for(int i=0;i<n;i++){
        printf("+%d",a[i]);
    }
    printf("is%d",sum);

}

int main(){
    int n=input_array_size();
    int a[n];
    input_array(n,a);
    int sum= sum_n_array();
    output(n,a,sum);
    return 0;
}