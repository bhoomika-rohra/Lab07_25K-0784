#include <stdio.h>
int main() {
    char mystr[100];
    int i;

    printf("Enter a string: ");
    scanf("%[^A-Za-z]", mystr); 

    printf("\nnon-alphabetic characters:\n");
    for (i = 0; mystr[i] != '\0'; i++) {
        printf("%c", mystr[i]); 
    }
    return 0;
}
