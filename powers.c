// a^b problem
#include <stdio.h>
int main() {
    int a , b;
    int multiply = 1;
    printf("enter your number: ");
    scanf("%d", &a);
    printf("enter your number: ");
    scanf("%d", &b);
    for (int i=1; i<=b; i++ ){
      multiply = multiply*a;   
    } 
    printf("a^b is: %d", multiply);
    return 0;
}