#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nelio(int luku);

int main (int args, char *argv[]){
    
    if (args < 2) {
        printf("Et antanut lukua!\n");
        printf("Kiitos ohjelman käytöstä.\n");
        return (0);
    }
    int luku = atoi(argv[1]);
    int nelioitu = nelio(luku); 
    printf("Luvun neliö on %d.\n", nelioitu);
    printf("Kiitos ohjelman käytöstä.\n");
    return (0);
        
}

int nelio (int luku){
    printf("Luku on %d.\n", luku);
    int LuvunNelio = luku * luku;
    return LuvunNelio;
}
