//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = arr;
    ptr++;
    printf("%d\n", *ptr);
    return 0;
}
