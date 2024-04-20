#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *title;
    int PhySize;
    int LogSize;
    int *data;
}COLUMN;

COLUMN *create_column(char *title) {
    COLUMN *column = (COLUMN*) malloc(sizeof(COLUMN));
    if (column == NULL) {
        printf("Impossible to allocate memory for the column \n");
        return NULL;
    }
    column->title = strdup(title);
    column->data = NULL;
    column->PhySize = 0;
    column->LogSize = 0;

    return column;

}




