#include <stdio.h>

#define MAX_SIZE 30

// Funktio merkkijonon pituuden laskemiseen
int my_strlen(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Funktio merkkijonon kopioimiseen
void my_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Muista lisätä loppu-merkki
}

int main() {
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    
    printf("Anna kopioitava merkkijono: ");
    fgets(str1, MAX_SIZE, stdin);

    // Poista rivinvaihtomerkki fgets-funktion jälkeen
    int length = my_strlen(str1);
    if (str1[length - 1] == '\n') {
        str1[length - 1] = '\0';
    }

    // Kopioi merkkijono
    my_strcpy(str2, str1);

    // Tulosta molemmat merkkijonot päällekkäin
    printf("Merkkijono 1 on '%s'.\n", str1);
    printf("Merkkijono 2 on '%s'.\n", str2);
    printf("Kiitos ohjelman käytöstä.");
    return 0;
}
