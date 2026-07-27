#include <stdio.h>

int main() {
    int n;
    printf("enter an integer : ");
    scanf("%d", &n);
    int i;
    for (i=2; i<n; i++){
        if (n%i == 0){
            printf("not a prime");
            break;
            }
        }
        if (i==n && i>1){
            printf("is a prime");
        }
        return 0;
}