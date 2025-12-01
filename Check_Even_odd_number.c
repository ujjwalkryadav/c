#include<stdio.h>
int main(){
    int num;

    printf("Enter Number to Check Even Or Odd");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d Number Is Even", num);
    }
    else {
        printf("%d Number Is Odd", num);

    }

    return 0;
}