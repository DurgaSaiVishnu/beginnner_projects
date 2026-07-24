#include <stdio.h>
int main() {
    int weekday_num;
    printf("enter your weekday number: ");
    scanf("%d", &weekday_num);
    if (weekday_num == 1){
        printf("Monday");
    }else if (weekday_num == 2){
        printf("Tuesday");
    }else if (weekday_num == 3){
        printf("Wednesday");
    }else if (weekday_num == 4){
        printf("Thursday");
    }else if (weekday_num == 5){
        printf("Friday");
    }else if (weekday_num == 6){
        printf("Saturday");
    }else if (weekday_num == 7){
        printf("Sunday");
    }else{
        printf("invalid weekday");
    }
}