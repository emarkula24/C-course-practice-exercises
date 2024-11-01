#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Tietueen määrittely
typedef struct Car {
    char brand[50];
    int year;
    struct Car *next;
} Car;

// Aliohjelmien esittely
Car* addCar(Car *head, const char *brand, int year);
void printCars(Car *head);
void freeCars(Car *head);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Et antanut tiedoston nimeä.\n");
        printf("Kiitos ohjelman käytöstä.\n");
        return 0;
    }
    printf("Luetaan tiedot tiedostosta %s.\n", argv[1]);
    FILE *file = fopen(argv[1], "r");

    if (file == NULL) {
        printf("Tiedoston avaus epäonnistui.\n");
        printf("Kiitos ohjelman käytöstä.\n");
        return 0;
    }
    
    Car *head = NULL;
    char line[100];
    char brand[50];
    int year;

    while (fgets(line, sizeof(line), file)) {
        if (sscanf(line, "%s %d", brand, &year) == 2) {
            head = addCar(head, brand, year);
        }
    }
    fclose(file);
    printf("Tiedot luettu linkitettyyn listaan.\n");
    if (head == NULL) {
        printf("Ajoneuvoja ei löytynyt.\n");
    } else {     
        printCars(head);
    }
   
    freeCars(head);
    printf("Muisti vapautettu.\n");
    printf("Kiitos ohjelman käytöstä.\n");
    return 0;
}

// Aliohjelma uuden tietueen lisäämiseksi listaan
Car* addCar(Car *head, const char *brand, int year) {
    Car *newCar = (Car*)malloc(sizeof(Car));
    if (newCar == NULL) {
        perror("Muistin varaaminen epäonnistui");
        exit(1);
    }
    strcpy(newCar->brand, brand);
    newCar->year = year;
    newCar->next = NULL;

    if (head == NULL) {
        return newCar;
    }

    Car *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newCar;
    return head;
}

// Aliohjelma tietojen tulostamiseen
void printCars(Car *head) {
    Car *current = head;
    int count = 1;
    while (current != NULL) {
        printf("%d. ajoneuvo: %s vuosimalli %d.\n", count, current->brand, current->year);
        current = current->next;
        count++;
    }
}

// Aliohjelma varatun muistin vapauttamiseksi
void freeCars(Car *head) {
    Car *current = head;
    while (current != NULL) {
        Car *next = current->next;
        free(current);
        current = next;
    }
}
