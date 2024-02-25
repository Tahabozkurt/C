//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    char cumle[1000];

    printf("Bir cumle giriniz: ");
    fgets(cumle, sizeof(cumle), stdin);

    printf("Girilen cumle:\n");

    for (int i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", cumle[i]); 
        }
    }

    return 0;
}
