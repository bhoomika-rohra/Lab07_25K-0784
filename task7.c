#include <stdio.h>
int main() {
    int arr[10];
    int seen[100] = {0};  
    int i;
    for (i = 0; i < 10; i++) {
        printf("enter a number (0-99): ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
        if (seen[arr[i]] == 0) {
            seen[arr[i]] = 1; 
        } else {
            arr[i] = -1;       
        }
    }
    printf("Array after marking duplicates as -1:\n");
    for (i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
