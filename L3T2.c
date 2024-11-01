#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int valikko(int isFirstIteration);
void kirjoita_tiedosto(char *tiedosto, char *nimi);
void lue_tiedosto(char *tiedosto);

int main (void) {
    char tiedosto[50];
    printf("Tämä ohjelma lisää nimiä tiedostoon ja lukee ne.\n");
    printf("Anna käsiteltävän tiedoston nimi: ");
    scanf("%s", tiedosto);

    int isFirstIteration = 1;
    while (1) {
        char nimi[50];
        int choice;
        choice = valikko(isFirstIteration);
        isFirstIteration = 0; 
        if (choice == 1) {
            printf("Anna lisättävä nimi: ");
            scanf("%s", nimi);
            kirjoita_tiedosto(tiedosto, nimi);
            printf("Nimi lisätty tiedostoon.\n");
        } else if (choice == 2) {
            lue_tiedosto(tiedosto);
            printf("Tiedosto luettu ja tulostettu.\n");
        } else if (choice == 0) {
            printf("Kiitos ohjelman käytöstä.\n");
            break;
        }
    }
    return 0;
}

void lue_tiedosto(char *tiedosto) {
    char rivi[50];
    FILE *file;

    file = fopen(tiedosto, "r");

    if (file == NULL) {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan: ");
        exit(0);
    }
    printf("Tiedostossa olevat nimet:\n");
    while (fgets(rivi, 50, file) != NULL) {
        printf("%s", rivi);
    }
    fclose(file);
}

void kirjoita_tiedosto(char *tiedosto, char *nimi) {
    FILE *file;
    file = fopen(tiedosto, "a");
    if (file == NULL) {
        perror("Tiedoston avaaminen epäonnistui");
        exit(0);
    }
    fprintf(file, "%s\n", nimi);
    fclose(file);
}

int valikko(int isFirstIteration) {
    int valinta;
    if (!isFirstIteration) {
        printf("\n");
    }
    printf("Valitse alla olevista valinnoista\n");
    printf("1) Lisää uusi nimi\n2) Tulosta nimet\n0) Lopeta\n");
    printf("Anna valintasi: ");
    scanf("%d", &valinta);
    getchar(); 
    return valinta;
}
