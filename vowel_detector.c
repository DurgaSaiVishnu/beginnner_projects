#include <stdio.h>

int main() {
    char ch;
    printf("enter a character: ");
    scanf("%c", &ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("Vowel\n");
        break;
    default:
    printf("consonant");    
    }
    return 0;
}