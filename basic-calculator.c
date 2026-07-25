#include <stdio.h>

int main() {
    double a, b;
    char op;
    printf("enter first number: ");
    scanf("%lf", &a); 
     printf("enter second number: ");
    scanf("%lf", &b); 
    printf("enter the operation you want to perform: ");
    scanf(" %c", &op);
    switch(op){
        case '+':
        printf("%.2lf",(a+b));
        break;
        case '-':
        printf("%.2lf",(a-b));
        break;
        case '*':
        printf("%.2lf",(a*b));
        break;
        case '/':
        printf("%.2lf",(a/b));
        break;
        default:
        printf("not a valid operation");
        break;
    }

    return 0;
}