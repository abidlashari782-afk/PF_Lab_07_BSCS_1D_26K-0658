#include <stdio.h>

int main() {
    int n = 5;

    printf("=== Rising Triangular Pattern ===\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("=== Reverse Triangular Pattern ===\n");
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n=== Triangular Multiplication Values (i * j) ===\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}