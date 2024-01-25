#include <stdio.h>

#ifndef BOOK
#define BOOK
int totalBooks=0;
int size=20;
typedef struct Book
{
    int bookId;
    char bookName[30];
    char bookAuthor[30];
    char bookCategory[30];
    double bookPrice;
    double starRating;
}Book;
int totalCountofBooks( Book*);
// struct Books storeBooksInfo(Books *,int);
void printBooksInfo(Book*);
int searchBooksById(Book*, int);
void removeBookById(Book*,int);
void searchBooksByName(Book*, char *);
void searchBooksByAuthor(Book*, char *);
void searchBooksByCategory(Book*, char *);
void doOperation (Book*,int);
void addBookInfo(Book*);
void printBooksInfobyIndex(Book*, int);
void sortBookBy(Book*,int);
#endif