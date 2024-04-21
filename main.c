#include "column/column.h"
#define REALOC_SIZE 256

int main() {
    COLUMN *mycol = create_column("My column");
    int val = 5;
    if (insert_value(mycol, val))
        printf("Value added successfully to my column\n");
    else
        printf("Error adding value to my column\n");

    insert_value(mycol, 52);
    insert_value(mycol, 15);
    insert_value(mycol, 44);
    insert_value(mycol, 15);
    print_col(mycol);



return 0;
}