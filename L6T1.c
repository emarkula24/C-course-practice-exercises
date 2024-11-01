#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct numbers{
    int iNumber;
    struct numbers *pNext;
} NUMBERS; 

NUMBERS *pStart = NULL, *pEnd = NULL;
NUMBERS *pNew = NULL, *ptr = NULL;
int main (void) {
    int input;
    printf("Anna listan luvut.\n");

    while (1) {
        printf ("Anna positiivinen kokonaisluku, 0 lopettaa: ");
        scanf ("%d", &input);
        if (input == 0){
            break;
        }

        if ((pNew = (NUMBERS*)malloc(sizeof(NUMBERS))) == NULL) {
            perror("Muistin varaus epäonnistui.\n");
            exit(0);
        }
        pNew->iNumber = input;
        pNew->pNext = NULL;
        
        if (pStart == NULL){
            pStart = pNew;
            pEnd = pNew;
        } else {
            pEnd->pNext = pNew;
            pEnd = pNew;
        }
    }
    printf("Listassa on seuraavat luvut: ");
    ptr = pStart;
    while (ptr != NULL){
        printf("%d ", ptr -> iNumber);
        ptr = ptr->pNext;
    }
    printf("\n");
    ptr = pStart;
    while (ptr != NULL){
        pStart = pStart->pNext;
        free (ptr);
        ptr = pStart;
    }
    printf("Kiitos ohjelman käytöstä.\n");
    return (0);

}