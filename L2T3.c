# include <stdio.h>

int main (void) {
    int valinta;
    int kierros = 1;
    printf("Anna jokin kokonaisluku väliltä 1-10: ");
    scanf("%d", &valinta);

    if (valinta >= 1 && valinta <= 10){
        while (kierros <= valinta) {
            printf("%d kierros.\n", kierros);
            kierros++;
        }        
    }else{
        printf("Antamasi luku ei ole välillä 1-10.\n");
    }




}