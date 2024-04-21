Made in Efrei

By Loris Cacciottolo & Youcef Cheriet

C project :

Features :

1. Column Structure :


Attributes:

title: String

data: Dynamic array of integers

physical_size: Total allocated memory

logical_size: Number of values


Functions:

Create Column: COLUMN *create_column(char *title);

Insert Value: int insert_value(COLUMN *col, int value);

Free Memory: void delete_column(COLUMN **col);

Display Content: void print_col(COLUMN *col);


2. CDataframe Structure
   
Attributes:

Array of COLUMN pointers


Functions:

1. Initialization:
   
Create empty dataframe

Fill dataframe from user input

Hard fill dataframe


3. Displaying:
   
Display entire dataframe

Display subset of rows or columns


5. Operations:

Add/delete row

Add/delete column

Rename column

Search for value

Access/replace cell value

Display column names



7. Analysis and Statistics:

Count rows/columns

Count cells equal/greater/less than a value


The aim of this project is to create a set of C language functions (commonly known as a library) that
will make it easier to manipulate data.
