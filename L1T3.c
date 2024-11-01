#include <stdio.h>

int main (void) {
    int luku;
    printf("Anna ensimmäinen kokonaisluku: ");
    scanf("%d", &luku);
    int toinen_luku;
    printf("Anna toinen kokonaisluku: ");
    scanf("%d", &toinen_luku);

    int kertoma = (luku + toinen_luku) * 2;
    int osamaara = (luku / toinen_luku) - 3;

    printf("(%d + %d) * 2 = %d\n", luku, toinen_luku, kertoma);
    printf("(%d / %d) - 3 = %d\n", luku, toinen_luku, osamaara);

    ++luku;
    --toinen_luku;

    int jakokaannos = luku % toinen_luku; 
    printf("%d %% %d = %d\n", luku, toinen_luku, jakokaannos);
    return (0);


}