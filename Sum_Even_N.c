#include<stdio.h>
int main(){
int N, i;
int Sum = 0;
printf("Enter N Number");
scanf("%d", &N);

for(i = 0; i<= N; i++){
    if(i % 2 == 0){
    Sum = Sum + i;
    }
}
printf("Sum Of N Even Number = %d", Sum);
return 0;

}