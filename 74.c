//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int ustunu_al(int x, int y) {
    if (y == 0) {
        return 1; 
    } else if (y < 0) {
        return 1.0 / ustunu_al(x, -y);
    } else {
        return x * ustunu_al(x, y - 1);
    }
}

int main() {
    int x, y;

    printf("Enter the base value (x): ");
    scanf("%d", &x);

    printf("Enter the exponent value (y): ");
    scanf("%d", &y);

    printf("%d raised to the power of %d is: %d\n", x, y, ustunu_al(x, y));

    return 0;
}




