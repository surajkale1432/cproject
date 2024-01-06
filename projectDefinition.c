#include <stdio.h>
#include <stdlib.h>
#include "projectHeader.h"
#include <stdio.h>
int totalCountofBooks(struct Books *book)
{
    return totalBooks;
}
struct Books storeBooksInfo(struct Books *book, int num)
{
}
void printBooksInfo(struct Books *book)
{
    int i;
    for(i=0;i<totalBooks;i++)
    {
        printf("\nBookId = %d",book[i].bookId);
        printf("\nBookName = %s",book[i].bookName);
        printf("\nBookAuthor = %s",book[i].bookAuthor);
        printf("\nBookCategory = %s",book[i].bookCategory);
        printf("\nBookPrice = %.2lf",book[i].bookPrice);
        printf("\nBookRating = %.2lf",book[i].starRating);
        printf("\n--------------------------");
    }
}
void addBookInfo(struct Books *book)
{
    int i;
    for (i = 0; i < 1; i++)
    {
        printf("\nEnter Book Id = ");
        scanf("%d", &book[totalBooks].bookId);
        printf("\nEnter Book Name = ");
        fflush(stdin);
        scanf("%s", &book[totalBooks].bookName);
        printf("\nEnter Book Author = ");
        fflush(stdin);
        scanf("%s", &book[totalBooks].bookAuthor);
        printf("\nEnter Book Category = ");
        fflush(stdin);
        scanf("%s", &book[totalBooks].bookCategory);
        printf("\nEnter Book Price = ");
        scanf("%lf", &book[totalBooks].bookPrice);
        printf("\nEnter Book Rating in Star * = ");
        scanf("%lf", &book[totalBooks].starRating);
        totalBooks++;
    }
}
int searchBooksById(struct Books *book, int bookId, int resultId)
{
    int i, found = 0;
    for (i = 0; i < totalBooks; i++)
    {
        if (book[i].bookId == bookId)
        {
            resultId = book[i].bookId;
            found++;
        }
    }
    if (found != 0)
    {
        return resultId;
    }
    else
        return -1;
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
void doOperation(struct Books *book, int ch)
{
    int totalBooks;
    switch (ch)
    {
    case 1:
        addBookInfo(book);
        break;
    case 2:
        printBooksInfo(book);
        break;
    case 7:
        totalBooks = totalCountofBooks(book);
        printf("\nTotal Books present in Library = %d", totalBooks);
    }
}