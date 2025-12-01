#include<stdio.h>
int main(){
    int sub1, sub2, sub3, total = 300;

    printf("Note:- Total Marks:- 300, Total Marks in each Subject:- 100\n");

    printf("Enter The Marks Of Sub1");
    scanf("%d", &sub1);

    printf("Enter The Marks Of Sub2");
    scanf("%d", &sub2);

    printf("Enter The Marks Of Sub3");
    scanf("%d", &sub3);

    total = sub1+sub2+sub3;
    printf("Total Marks = %d\n", total);

    printf("Marks In Persentage = %d %%\n", (total * 100) / 300);
    printf("Marks In Avarage = %d\n", (sub1 + sub2 + sub3) / 3);


return 0;
}