# include <stdio.h>

int potenssi (int luku, int potenssiin); 

int main(void) {

    int luku;
    int potenssiin;
    int vastaus;
    printf("Ohjelma laskee luvun potenssin.\n");
    printf("Anna kokonaisluku, jonka haluat korottaa potenssiin: ");
    scanf("%d", &luku);
    printf("Anna potenssi, jonka haluat laskea: ");
    scanf("%d", &potenssiin);


    vastaus = potenssi(luku, potenssiin);
    printf("%d ^ %d = %d.\n", luku, potenssiin, vastaus);
    printf("Kiitos ohjelman käytöstä.\n");
    return (0);

}   

int potenssi (int luku, int potenssiin){
    int tulos = 1;
    int indeksi = 1;
     for (int indeksi = 0; indeksi < potenssiin; indeksi++) {
        tulos *=luku;
    }
    return tulos;
}   