//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//
#include <stdio.h>

int main() {
    char cumle[100];
    char *p1, *p2;
    int kontrol = 1;

    printf("Bir cümle girin: ");
    gets(cumle);

    for (p2 = cumle; *p2; p2++)
        ;

    p2--;

    for (p1 = cumle; p1 < p2; p1++, p2--) {
        if (*p1 != *p2) {
            kontrol = 0;
            break;
        }
    }

    if (kontrol)
        printf("Girilen cümle bir palindromdur: %s\n", cumle);
    else
        printf("Girilen cümle bir palindrom değildir: %s\n", cumle);

    return 0;
}
