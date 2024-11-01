#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1000
int lueAskeleetListaan(int *lista, int *koko);
void tulostaLista (int *lista, int koko);


int lueAskeleetListaan(int *lista, int *koko){
    int summa;
    int *array = (int*)malloc(koko);
    if (array == NULL) {
        perror("Muistin varaus epäonnistui.\n");
        exit(0);
    }

    FILE*tiedosto;
    fopen("askeldata.txt", "r");
    if (tiedosto == NULL) {
        perror("Tiedoston avaus epäonnistui.\n");
        exit (0);
    }
    char line[MAX_LINE];
    
    while (fgets(line, sizeof(line), tiedosto)) {
        line[strcspn(line, "\n")] = 0;
    }
}
