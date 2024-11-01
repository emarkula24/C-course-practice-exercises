#include <stdio.h>
#include <stdlib.h>

#define RIVI 2
#define SARAKE 2

void tulosta_matriisi(int matriisi[RIVI][SARAKE], char *nimi);

int main (void) {

    int alkio11, alkio12, alkio13, alkio14;
    int alkio21, alkio22, alkio23, alkio24;

    int matriisi1[RIVI][SARAKE];
    int matriisi2[RIVI][SARAKE];
    int summamatriisi[RIVI][SARAKE];

    printf("Anna arvot yhteenlaskettaville matriiseille:\n");
    printf("Matriisin 1 alkiot:\n");
    printf("Rivi 1 alkio 1: ");
    scanf("%d", &alkio11);
    printf("Rivi 1 alkio 2: ");
    scanf("%d", &alkio12);
    printf("Rivi 2 alkio 1: ");
    scanf("%d", &alkio13);
    printf("Rivi 2 alkio 2: ");
    scanf("%d", &alkio14);

    matriisi1[0][0] = alkio11;
    matriisi1[0][1] = alkio12;
    matriisi1[1][0] = alkio13;
    matriisi1[1][1] = alkio14;

    // Print Matrix 1
    tulosta_matriisi(matriisi1, "\nMatriisi 1");

    // Input for Matrix 2
    printf("\nMatriisin 2 alkiot:\n");
    printf("Rivi 1 alkio 1: ");
    scanf("%d", &alkio21);
    printf("Rivi 1 alkio 2: ");
    scanf("%d", &alkio22);
    printf("Rivi 2 alkio 1: ");
    scanf("%d", &alkio23);
    printf("Rivi 2 alkio 2: ");
    scanf("%d", &alkio24);

    matriisi2[0][0] = alkio21;
    matriisi2[0][1] = alkio22;
    matriisi2[1][0] = alkio23;
    matriisi2[1][1] = alkio24;

    // Print Matrix 2
    tulosta_matriisi(matriisi2, "\nMatriisi 2");

    // Calculate sum matrix
    for (int i = 0; i < RIVI; i++) {
        for (int j = 0; j < SARAKE; j++) {
            summamatriisi[i][j] = matriisi1[i][j] + matriisi2[i][j];
        }
    }

    // Print Sum Matrix
    tulosta_matriisi(summamatriisi, "\nSummamatriisi");

    printf("\nKiitos ohjelman käytöstä.\n");

    return 0;
}

void tulosta_matriisi(int matriisi[RIVI][SARAKE], char *nimi) {
    printf("%s:\n", nimi);
    for (int i = 0; i < RIVI; i++) {
        for (int j = 0; j < SARAKE; j++) {
            printf("%4d ", matriisi[i][j]);
        }
        printf("\n");
    }
}
