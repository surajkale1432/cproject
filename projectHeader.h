#include <stdio.h>
struct Books
{
    int bookId;
    char bookName[30];
    char bookAuthor[30];
    char bookCategory[30];
    double bookPrice;
    double starRating;
};
int totalCountofBooks(struct Books *);
struct Books storeBooksInfo(struct Books *);
void printBooksInfo(struct Books *);
int searchBooksById(struct Books *, int, int);
void searchBooksByName(struct Books *, char *, int *);
void searchBooksByAuthor(struct Books *, char *, int *);
void searchBooksByCategory(struct Books *, char *, int *);