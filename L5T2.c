#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tarkistaSyote(char *taulukko);
int* varaaMuisti(int koko);
void taytaTaulukko(int* muisti, int maara);
void vapautaMuisti(int* muisti);


int main (int args, char *argv[]) {
    if (args < 2) {
        printf("Et antanut taulukon kokoa.\n");
        printf("Kiitos ohjelman käytöstä.\n");
        return (0);
    }

    char *taulukko = argv[1];
    int luku = tarkistaSyote(taulukko);
    if (luku == 0){
        printf("Parametri ei ollut positiivinen kokonaisluku.\n");
        printf("Kiitos ohjelman käytöstä.\n");
        return (0);
    }
    int* pMuistilohko = varaaMuisti(luku);
    printf("Muistin varaus onnistui.\n");
    printf("Taulukossa on tilaa %d alkiolle.\n", luku);
    taytaTaulukko(pMuistilohko, luku);
    printf("Taulukossa on luvut: ");
    for (int i = 0; i < luku; i++) {
        printf("%d ", pMuistilohko[i]);
    }
    printf("\nTaulukko tulostettu.\n");
    vapautaMuisti(pMuistilohko);
    printf("Muisti vapautettu.\n");
    printf("Kiitos ohjelman käytöstä.\n");
    return (0);
}

int tarkistaSyote(char* taulukko){
    
    int luku = atoi(taulukko);
    if (luku <= 0){
        return 0;
    } 
    if ( luku > 0 ){
        return luku;
    }  
}

int* varaaMuisti(int luku) {
    int* array = (int*)malloc(luku * sizeof(int));
    if (array == NULL) {
        perror("Muistin varaus epäonnistui.\n");
        exit(0);
    }
    return array;
}

void taytaTaulukko(int* muisti, int maara){
    int luku = 1;
    for (int i = 0; i < maara; i++){
        printf("Anna %d. luku: ", luku);
        scanf("%d", &muisti[i]);
        luku++;
    }
    printf("Taulukko täytetty.\n");
}

void vapautaMuisti(int*muisti){
    free(muisti);
}