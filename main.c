#include <stdio.h>

int main() {
    printf("How many rows for your star design?");
    int numrows;
    scanf("%d", &numrows);
    printf("How many stars in the first row?");
    int numstars;
    scanf("%d", &numstars);
    FILE *fptr;
    if ((fptr = fopen("C:\\Users\\Justin\\Documents\\ucf\\cop3223c\\Lab4\\output.txt", "w")) != NULL) {
        for (int i = 0; i < numrows; i++) {
            if ((i + 1) % 2 == 0) {
                for (int j = 0; j < numrows - 1; j++) {
                    fprintf(fptr, "*");
                }
            } else {
                for (int j = 0; j < numrows; j++) {
                    fprintf(fptr, "*");
                }
            }
            fprintf(fptr, "\n\n");
        }
        fclose(fptr);
    }
    return 0;
}
