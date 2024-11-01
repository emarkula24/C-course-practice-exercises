#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kirjoita_tiedosto(char *tiedosto_nimi, int arvo) {
    srand(arvo);
    FILE *file ;
    file = fopen(tiedosto_nimi, "wb");
    if (file == NULL) {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan: ");
        return 0;
    }
    for (int i = 0; i < 20; i++){
        int random_number = rand() % 1000;
        fwrite(&random_number, sizeof(random_number), 1, file);
        
    }
    
    fclose(file);
    return 1;
    
}

void lue_tiedosto(char *tiedosto_nimi){
    int luku;
    FILE *file;
    file = fopen(tiedosto_nimi, "rb");
    if (file == NULL) {
        perror("Tiedoston avaaminen epäonnistui, lopetetaan: ");
        return;
    }
    printf("Tiedostossa on seuraavat luvut:\n");
    for (int i = 0; i < 20; i++){
        fread (&luku, sizeof(luku), 1, file);
        printf("%d ", luku);
    }
    printf("\nTiedoston lukeminen onnistui.\nKiitos ohjelman käytöstä.\n");
    fclose(file);
}
int main (void) {
    char tiedosto_nimi[30];
    int arvo;
    int kasiteltu;
    printf("Anna käsiteltävän tiedoston nimi: ");
    scanf("%s", tiedosto_nimi);
    printf("Anna satunnaisluvuille lähtöarvo: ");
    scanf("%d", &arvo);
    kasiteltu = kirjoita_tiedosto(tiedosto_nimi, arvo);
    if (kasiteltu == 0) {
        return (0);
    } else if (kasiteltu == 1){
        printf("Tiedoston kirjoitus onnistui.\n");
        lue_tiedosto(tiedosto_nimi);
    }
    return (0);

}