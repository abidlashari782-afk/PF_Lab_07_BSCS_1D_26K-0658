#include <stdio.h>

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int s = 0; s < n - i; s++) {
            printf("  ");
        }
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= n; i++) {
        for(int s = 0; s < n - i; s++) {
            printf("  ");
        }
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= n; i++) {
        for(int s = 0; s < n - i; s++) {
            printf("  ");
        }
        for(int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= n; i++) {
        for(int s = 0; s < n - i; s++) {
            printf("  ");
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= n; i++) {
        for(int s = 0; s < n - i; s++) {
            printf("  ");
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 1; i <= n; i++) {
        for(int s = 0; s < n - i; s++) {
            printf("  ");
        }
        for(int j = 1; j <= (2 * i - 1); j++) {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}