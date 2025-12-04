#include<stdio.h>
int main (){
    int num1 , num2;
    int sum ,difference , product , quotient , remainder ;
    scanf ("%d %d" , &num1 , &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 /num2;
    remainder = num1 % num2;
    printf("Sum:%d",sum);
    printf("Difference:%d",difference);
    printf("Product:%d",product);
    printf("Quotient:%d",quotient);
    printf("Remainder:%d",remainder);
    return 0;
}
