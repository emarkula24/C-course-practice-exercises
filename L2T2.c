#include <stdio.h>


int main (void) {
    int valinta;
    int yhteen = 0;
    int i = 0;

    printf("Anna jokin luku väliltä 10 - 200: ");
    scanf("%d", &valinta);

    if (valinta >= 10 && valinta <= 200){
        
        for (i = 0; i <= valinta; i++) {
        yhteen += i;
        }

        printf("Lukujen 0 - %d summa on %d.\n", valinta, yhteen);
    } else{
        printf("Antamasi luku ei ole annetulla välillä.");
    }
    
    return (0);

}