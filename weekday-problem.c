#include <stdio.h>

int main() {
    int day;
    printf("enter a weekday number: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("monday");
        break;
    case 2:
    printf("Tuesday");
        break;
    case 3:
    printf("wednesday");
    break;
    case 4:
    printf("thursday");
    break;
    case 5:
    printf("friday");
    break;
    case 6:
    printf("saturday");
    break;
    case 7:
    printf("sunday");
    break;
<<<<<<< HEAD
    default:
    printf("invalid weekday");
=======
>>>>>>> 7e8c70303a7597dae788d13e14d698c44e11e202
    }
    return 0;
}