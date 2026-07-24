#include <stdio.h>
int main() {
    int sub1;
    int sub2;
    int sub3;
    printf("Enter your sub1 marks  : ");
    scanf("%d", &sub1);
    printf("Enter your sub2 marks : ");
    scanf("%d", &sub2);
    printf("Enter your sub3 marks : ");
    scanf("%d", &sub3);
    int grade = ((sub1 + sub2 + sub3) /300)*100;
    if (grade < 35){
        printf("your grade is F");
    }else if (grade >= 35  && grade < 45){
        printf("your grade is E");
    }else if (grade >= 45 && grade < 60){
        printf("your grade is D");
    }else if (grade >= 60 && grade < 75){
        printf("your grade is C");
    }else if (grade >= 75 && grade < 90){
        printf("your grade is B");
    }else if (grade >= 75 && grade < 90){
        printf("your grade is A");
    }else if (grade >= 90 && grade <= 100){
        printf("your grade is A+");
    }else{
        printf("Invalid grade");
    }
    return 0;
}