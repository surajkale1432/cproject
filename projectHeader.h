#include <stdio.h>

#ifndef BOOK
#define BOOK
int totalBooks=0;
// #include "rawDataBooks.c"
typedef struct Books
{
    int bookId;
    char bookName[30];
    char bookAuthor[30];
    char bookCategory[30];
    double bookPrice;
    double starRating;
}Books;
int totalCountofBooks( Books *);
struct Books storeBooksInfo(Books *,int);
void printBooksInfo(Books *);
int searchBooksById(Books *, int);
void removeBookById(Books*,int);
void searchBooksByName(Books *, char *);
void searchBooksByAuthor(Books *, char *);
void searchBooksByCategory(Books *, char *);
void doOperation (Books*,int);
void addBookInfo(Books *);
void printBooksInfobyIndex(Books *, int);
void sortBookBy(Books*,int);
#endif