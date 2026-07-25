// 1 to n numbers' sum and average
#include <stdio.h>
int main() {
    double n;
    double avg;
    double sum = 0;
    printf("enter your number: ");
    scanf("%lf", &n);
    for(int i=1; i<=n; i++){
        sum += i;
    }
    avg = sum/n;
    printf("sum : %.2lf avg : %.2lf ", sum, avg);
    return 0;
}