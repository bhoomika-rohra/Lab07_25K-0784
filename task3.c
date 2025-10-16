#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int i, pcount = 0, fcount = 0, mark;
    float psum = 0, fsum = 0;

    for(i = 0; i < 10; i++) {
        printf("enter marks: ");
        scanf("%d", &mark);

        if (mark == -1) {
            break;
        }
        else if (mark >= 5 && mark <= 10) {
            pass[pcount] = mark;
            pcount++;
            psum += mark;
        }
        else if (mark >= 0 && mark < 5) {
            fail[fcount] = mark;
            fcount++;
            fsum += mark;
        }
        else {
            printf("Invalid mark entered. Please enter marks between 0 and 10.\n");
            i--;
        }
    }
    if (pcount > 0) {
        printf("\nPassed students marks: ");
        for (i = 0; i < pcount; i++) {
            printf("%d ", pass[i]);
        }
        printf("\nAverage of passed students: %.2f\n", psum / pcount);
    } else {
        printf("\nNo passed students marks entered.\n");
    }

    if (fcount > 0) {
        printf("\nFailed students marks: ");
        for (i = 0; i < fcount; i++) {
            printf("%d ", fail[i]);
        }
        printf("\nAverage of failed students: %.2f\n", fsum / fcount);
    } else {
        printf("\nNo failed students marks entered.\n");
    }
    return 0;
}
