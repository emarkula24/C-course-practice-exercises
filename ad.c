#include <stdio.h>
#include <stdlib.h>
#define RIVI 2
#define SARAKE 2
int main(void) {
int i, j;
int matriisi[RIVI][SARAKE] = {{1,2}, {3,4}};
for (i=0; i < RIVI; i++) {
for (j=0; j < SARAKE; j++)
printf("%d ", matriisi[i][j]);
printf("\n");
}
return(0);
}