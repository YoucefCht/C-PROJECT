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
    COLUMN *column = (COLUMN *) malloc(sizeof(COLUMN));
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

int insert_value(COLUMN *col, int value) {
    if (col->LogSize == col->PhySize) {
        col->PhySize *= 2;
        int *new_data = (int *)realloc(col->data, sizeof(int) * col->PhySize);
        if (new_data == NULL) {
            return 0;
        }
        col->data = new_data;
    }
    col->data[col->LogSize] = value;
    col->LogSize++;
    return 1;
}

void delete_column(COLUMN **col) {
    if(*col != NULL && col != NULL){
        free(*col);
        free((*col)->title);
        free((*col)->data);
        *col = NULL;
    }
}

void print_col(COLUMN *col) {
    printf("Data in the COLUMN:\n");
    for (int i = 0; i < col->logical_size; i++) {
        printf("\n[%d] %d ",i ,col->data[i]);
    }
    printf("\n");
}

