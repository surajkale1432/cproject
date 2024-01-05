#include <stdio.h>
#include <stdlib.h>
#include "projectHeader.h"
int totalCountofBooks(struct Books *book)
{
    int count = 0, i;
    int l=sizeof(book);
    printf("Name  = %s",book[0].bookName);
    // for (i = 0; book[i].bookName!='\0'; i++)
    // {
    //     count++;
    // }
    return count;
}
struct Books storeBooksInfo(struct Books *book)
{
}
void printBooksInfo(struct Books *book)
{
}
int searchBooksById(struct Books *book, int bookId, int resultId)
{
}
void searchBooksByName(struct Books *book, char *bookName, int *resultArray)
{
}
void searchBooksByAuthor(struct Books *book, char *bookAuthor, int *resultArray)
{
}
void searchBooksByCategory(struct Books *book, char *bookCategory, int *resultArray)
{
}