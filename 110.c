//
//  22.c
//  taa
//
//  Created by Taha Bozkurt on 29.11.2023.
//

#include <stdio.h>

int main() {
    float aci1, aci2, aci3;

    printf("Üçgenin açılarını derece cinsinden girin: ");
    scanf("%f %f %f", &aci1, &aci2, &aci3);

    if (aci1 + aci2 + aci3 != 180) {
        printf("Bu açılar bir üçgen oluşturmaz.\n");
    } else {

        if (aci1 == aci2 && aci2 == aci3) {
            printf("Bu bir eşit kenar üçgendir.\n");
        } else if (aci1 == aci2 || aci1 == aci3 || aci2 == aci3) {
            printf("Bu bir ikiz kenar üçgendir.\n");
        } else {
            printf("Bu bir çeşit kenar üçgendir.\n");
        }
    }

    return 0;
}

