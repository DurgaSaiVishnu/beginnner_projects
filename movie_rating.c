#include <stdio.h>

int main() {
    float rating;
    printf("Enter a rating for the movie (1-5): ");
    scanf("%f", &rating);
    if (rating >=0 && rating <= 2.0){
        printf("Flop\n");
    }else if(rating >= 2.1 && rating <= 3.4){
        printf("semi\n");
    }else if (rating >= 3.5 && rating <= 4.5){
        printf("Hit\n");
    }else if (rating >= 4.6 && rating <= 5.0){
        printf("Super Hit\n");
    }
    return 0;
}