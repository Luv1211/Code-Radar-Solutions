#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float average=(float)(a+b+c)/3;
    printf("Average: %.2f",average);
    return 0;

}