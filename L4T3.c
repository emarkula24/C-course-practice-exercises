#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int args, char *argv[]) {
    if (args == 1) {
        printf("Et antanut syötteitä.\n");
        printf("Kiitos ohjelman käytöstä.");
        return (0);
    }
    if (strcmp(argv[2], "+") == 0) {
        printf("%s + %s = %.2f\n", argv[1], argv[3], atof(argv[1]) + atof(argv[3]));
    }
    else if (strcmp(argv[2], "-") == 0) {
        printf("%s - %s = %.2f\n", argv[1], argv[3], atof(argv[1]) - atof(argv[3]));
    }
    else if (strcmp(argv[2], "x") == 0) {
        printf("%s x %s = %.2f\n", argv[1], argv[3], atof(argv[1]) * atof(argv[3]));
    }
    else if (strcmp(argv[2], "/") == 0) {
        printf("%s / %s = %.2f\n", argv[1], argv[3], atof(argv[1]) / atof(argv[3]));
    } 
     else{
        printf ("Virheellinen syöte.\n");
        

    }
    printf("Kiitos ohjelman käytöstä.\n");
    return (0);
}