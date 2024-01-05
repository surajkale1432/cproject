#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "projectDefinition.c"
#include "rawDataBooks.c"
void main()
{
    struct Books book[50];
    rawData(book);
    int count = totalCountofBooks(book);
    printf("Count of Books = %d",count);
    
}
