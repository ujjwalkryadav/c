#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter First Number numbers: ");
    scanf("%d", &num1);

    printf("Enter Second Number numbers: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("Greather Number Is = %d", num1);
    }

    else if(num1 == num2){
        printf("Both Numbers Are Equal: %d and %d", num1, num2);

    else{
        printf("Greather Number Is = %d", num2);
    }
     
    return 0;
    
}   