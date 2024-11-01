#include <stdio.h>

int main (void) {
    float luku;
    float pii = 3.142;
    int valinta;
    printf("Anna liukuluku: ");
    scanf("%f", &luku);
    printf("\nValikko\n");
    printf("1) Kerro piin arvo luvulla %.3f.\n", luku);
    printf("2) Jaa piin arvo luvulla %.3f.\n", luku);
    printf("Valitse: \n");
    scanf("%d", &valinta);
    float tulos = pii * luku;
    float osamaara = pii / luku;
    switch (valinta){
        case 1:
            
            printf("Pii * %.3f = %.3f.\n", luku, tulos);
            break;
        case 2:
            
            printf("Pii / %.3f = %.3f.\n", luku, osamaara);
            break;
        default:
            printf("Tuntematon valinta.\n");
            break;
    }   
    
    return (0);

}