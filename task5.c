#include <stdio.h>

int main() {
    int arr[10];
    int max, min, difference;
    int i;

    printf("enter 10 values: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } 
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    difference = max - min;
    printf("the difference is: %d\n", difference);

    return 0;
}
