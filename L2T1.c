# include <stdio.h>

int main (void) {
    int valinta;
    int luku1, luku2;

    printf("Anna kaksi kokonaislukua: ");
    scanf("%d %d", &luku1, &luku2);

    printf("\nValikko\n");
    printf("1) Summaa luvut yhteen.\n");
    printf("2) Kerro luvut keskenään.\n");
    printf("Valitse: \n");
    scanf("%d", &valinta);

    if (valinta == 1) {
        int tulos = luku1 + luku2;
        printf("Luvut laskettiin yhteen. Tulos = %d.\n", tulos);
    } else if (valinta == 2) {
        int tulos = luku1 * luku2;
        printf("Luvut kerrottiin keskenään. Tulos = %d.\n", tulos);
    } else {
        printf("Tuntematon valinta.\n");
    }
    return (0);
}