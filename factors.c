#include <stdio.h>

int main() {
    int n;
    printf("enter an integer : ");
    scanf("%d", &n);
    for (int i=n; i>=1; i--){
        if (n%i == 0){
            printf("%d ", i);
        }
    }
    return 0;
}