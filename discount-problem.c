#include <stdio.h>
int main() {
    float price;
    printf("enter the price: ");
    scanf("%f",  &price );
    if (price >= 0 && price <= 5000){
        printf("your total amount is %f", price);
    }else if(price >= 5001 && price <= 7000){
        printf("your discount is 5%% so total amount  is %.2lf", price - 0.05*price);
    }else if(price >= 7001 && price <= 9000){
        printf("your discount is 5%% so total amount  is %.2lf", price - 0.1*price);
    }else if(price > 9000){
        printf("your discount is 5%% so total amount  is %.2lf", price - 0.2*price);
    }
    return 0;
}