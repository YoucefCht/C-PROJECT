#ifndef COLUMN_H
#define COLUMN_H

typedef struct {
    char *title;
    int *data;
    int physical_size;
    int logical_size;
} COLUMN;

COLUMN *create_column(char *title);
int insert_value(COLUMN *col, int value);
void delete_column(COLUMN **col);
void print_col(COLUMN *col);
int count_occurrences(COLUMN *col, int x);
int return_value(COLUMN *col, int x)
int ValGreater(COLUMN *col, int x);
int ValLess(COLUMN *col, int x);
int ValEqual(COLUMN *col, int x);

#endif
