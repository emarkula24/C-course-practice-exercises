#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int haeSuurin (int luku1, int luku2);
int haePienin (int luku1, int luku2);
float haeSuurinF (float fLuku1, float fLuku2);
float haePieninF (float fLuku1, float fLuku2);

int main (void) {
    int luku1, luku2;
    float fLuku1, fLuku2;
    char mjono1[21], mjono2[21];
    int suurinInt, pieninInt;
    float suurinFloat, pieninFloat;

    printf("Anna kaksi kokonaislukua:\n");
    printf("Luku 1: ");
    scanf("%d", &luku1);
    printf("Luku 2: ");
    scanf("%d", &luku2);
    suurinInt = haeSuurin(luku1, luku2);
    pieninInt = haePienin(luku1, luku2);
    if (suurinInt == pieninInt) {
        printf("Luvut %d ja %d ovat yhtä suuria.\n", luku1, luku2);
    } else {
        printf("Luku %d on suurempi ja %d pienempi.\n", suurinInt, pieninInt);
    }

    printf("Anna kaksi desimaalilukua:\n");
    printf("Luku 1: ");
    scanf("%f", &fLuku1);
    printf("Luku 2: ");
    scanf("%f", &fLuku2);
    suurinFloat = haeSuurinF(fLuku1, fLuku2);
    pieninFloat = haePieninF(fLuku1, fLuku2);
    if (suurinFloat == pieninFloat) {
        printf("Luvut %5.2f ja %5.2f ovat yhtä suuria.\n", fLuku1, fLuku2);
    } else {
        printf("Luku %5.2f on suurempi ja %5.2f pienempi.\n", suurinFloat, pieninFloat);
    }

    printf("Anna kaksi nimeä:\n");
    printf("Nimi 1: ");
    scanf("%s", mjono1);
    printf("Nimi 2: ");
    scanf("%s", mjono2);

    int result = strcmp(mjono1, mjono2);

    if (result == 0) {
        printf("Merkkijonona '%s' ja '%s' ovat yhtä suuria.\n", mjono1, mjono2);
    } else if (result > 0) {
        printf("Merkkijonona '%s' on suurempi ja '%s' pienempi.\n", mjono1, mjono2);
    } else {
        printf("Merkkijonona '%s' on suurempi ja '%s' pienempi.\n", mjono2, mjono1);
    }

    printf("Kiitos ohjelman käytöstä.\n");

    return 0;
}

int haeSuurin (int luku1, int luku2) {
    if (luku1 > luku2) {
        return luku1;
    } else {
        return luku2;
    }
}

int haePienin (int luku1, int luku2) {
    if (luku1 < luku2) {
        return luku1;
    } else {
        return luku2;
    }
}

float haeSuurinF (float fLuku1, float fLuku2) {
    if (fLuku1 > fLuku2) {
        return fLuku1;
    } else {
        return fLuku2;
    }
}

float haePieninF (float fLuku1, float fLuku2) {
    if (fLuku1 < fLuku2) {
        return fLuku1;
    } else {
        return fLuku2;
    }
}
