#include<stdio.h>

int main() {
    int n1,n2,n3;
    printf("enter number 1");
    scanf("%d",&n1);
    printf("enter number 2");
    scanf("%d",&n2);
    printf("enter number 3");
    scanf("%d",&n3);
    if((n1>n2)&&(n1>n3)){
        printf("number 1 is greater %d",n1);
    }
    else if((n2>n1)&&(n2>n3)){
        printf("number 2 is greater %d",n2);
    }
    else{
        printf("number 3 is greater %d",n3);
    }
    return 0;
}