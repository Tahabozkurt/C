//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

void baklavaDilimi(int n) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n + i; j++) {
            if (j >= n - i - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < n + i; j++) {
            if (j >= n - i - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Baklava dilimi boyutunu girin: ");
    scanf("%d", &n);

    baklavaDilimi(n);

    return 0;
}
