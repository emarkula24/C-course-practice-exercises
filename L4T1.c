#include <stdio.h>
#include <string.h>

#define MAKSIMI_PITUUS 50

struct kirja {
    char aNimi[MAKSIMI_PITUUS];
    int iPainovuosi;
    int iHyllypaikka;
};

int main(void) {
    struct kirja book;
    
    printf("Anna kirjan nimi: ");
    if (fgets(book.aNimi, MAKSIMI_PITUUS, stdin)) {
        size_t len = strlen(book.aNimi);
        if (len > 0 && book.aNimi[len - 1] == '\n') {
            book.aNimi[len - 1] = '\0';  
        }
    }

    
    printf("Anna kirjan painovuosi: ");
    while (scanf("%d", &book.iPainovuosi) != 1) {
        while (getchar() != '\n');  
        printf("Virheellinen syöte. Anna kirjan painovuosi uudelleen: ");
    }

    
    printf("Anna kirjan hyllypaikka: ");
    while (scanf("%d", &book.iHyllypaikka) != 1) {
        while (getchar() != '\n');  
        printf("Virheellinen syöte. Anna kirjan hyllypaikka uudelleen: ");
    }


    while (getchar() != '\n');

    printf("Kirjan nimi on '%s', painovuosi %d ja hyllypaikka %d.\n", book.aNimi, book.iPainovuosi, book.iHyllypaikka);
    printf("Kiitos ohjelman käytöstä.\n");
    
    return 0;
}
