#include <stdio.h>

int main() {
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
   printf( (age >= 18) ? "valid voter\n" : "not a valid voter\n");
    return 0;
}