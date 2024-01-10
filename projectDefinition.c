#include <stdio.h>
#include <stdlib.h>
#include "projectHeader.h"
#include <string.h>
int totalCountofBooks(Books *book)
{
    return totalBooks;
}
Books* resizeStructArray(Books *book,int totalSize)
{
    printf("\nEnter New SIZE = ");
    scanf("%d",&size);
    book=(Books*)realloc(book,(size+totalSize)*sizeof(Books));
}
void printBooksInfo(Books *book)
{
    int i;
    for (i = 0; i < totalBooks; i++)
    {
        printf("\nBookId        = %d", book[i].bookId);
        printf("\nBookName      = %s", book[i].bookName);
        printf("\nBookAuthor    = %s", book[i].bookAuthor);
        printf("\nBookCategory  = %s", book[i].bookCategory);
        printf("\nBookPrice     = %.2lf", book[i].bookPrice);
        printf("\nBookRating    = %.1lf", book[i].starRating);
        printf("\n--------------------------");
    }
}
void addBookInfo(Books *book)
{
    int i;
    for (i = 0; i < 1; i++)
    {
        printf("\nEnter Book Id = ");
        scanf("%d", &book[totalBooks].bookId);
        printf("\nEnter Book Name = ");
        fflush(stdin);
        gets(book[totalBooks].bookName);
        printf("\nEnter Book Author = ");
        fflush(stdin);
        gets(book[totalBooks].bookAuthor);
        printf("\nEnter Book Category = ");
        fflush(stdin);
        gets(book[totalBooks].bookCategory);
        printf("\nEnter Book Price = ");
        scanf("%lf", &book[totalBooks].bookPrice);
        printf("\nEnter Book Rating in Star * = ");
        scanf("%lf", &book[totalBooks].starRating);
        totalBooks++;
        printf("\nBook Added Successfully...");
    }
}
int searchBooksById(Books *book, int bookId)
{
    int foundIndex = -1, i;
    for (i = 0; i < totalBooks; i++)
    {
        if (book[i].bookId == bookId)
        {
            foundIndex = i;
            return foundIndex;
        }
    }
    if (foundIndex == -1)
    {
        printf("\nError: ID not found");
    }
}
void removeBookById(Books *book, int bookId)
{
    int index=-1;
    index = searchBooksById(book,bookId);
    int i;
    for (i = 0; i < totalBooks; i++)
    {
        if (book[i].bookId == bookId)
        {
            index = i;
        }
    }
    if (index != -1)
    {
        for (i = index; i < totalBooks - 1; ++i)
        {
            book[i] = book[i + 1];
        }
        totalBooks--;
        printf("\nBook with Id = %d Deleted Successfully", bookId);
    }
    else
        printf("\nError: Book with this ID not found.\n");
}
void printBooksInfobyIndex(Books *book, int bookIndex)
{

    if (bookIndex != -1)
    {
        printf("\nBookId       = %d", book[bookIndex].bookId);
        printf("\nBookName     = %s", book[bookIndex].bookName);
        printf("\nBookAuthor   = %s", book[bookIndex].bookAuthor);
        printf("\nBookCategory = %s", book[bookIndex].bookCategory);
        printf("\nBookPrice    = %.2lf", book[bookIndex].bookPrice);
        printf("\nBookRating   = %.1lf", book[bookIndex].starRating);
        printf("\n--------------------------");
    }
}
void searchBooksByName(Books *book, char *bookName)
{
    int foundIndex=-1, i,flag=0;
    for (i = 0; i < totalBooks; i++) 
    {
        foundIndex = strcasecmp(book[i].bookName, bookName);
        if (foundIndex == 0)
        {
            printBooksInfobyIndex(book,i);
            flag++;
        }
    }
    if(flag==0)
    {
        printf("\nError : Book Not found with Name %s",bookName);
    }
}

void searchBooksByAuthor(Books *book, char *bookAuthor)
{
    int foundIndex = -2, i,flag=0;
    for (i = 0; i < totalBooks; i++)
    {
        foundIndex = strcasecmp(book[i].bookAuthor, bookAuthor);
        if (foundIndex == 0)
        {
            flag++;
            printBooksInfobyIndex(book,i);
        }
    }
    if (flag==0)
    {
        printf("\nError : Result Not found for %s", bookAuthor);
    }
}
void sortBookBy(Books *book, int ch)
{
    int order;

    printf("\n1. Ascending\n2. Descending\nChoice = ");
    scanf("%d", &order);
    int i, j;
    for (i = 0; i < totalBooks; i++)
    {
        for (j = i + 1; j < totalBooks; j++)
        {
            if (ch == 1 && order == 1)
            {
                if (book[i].bookId > book[j].bookId)
                {
                    Books b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 1 && order == 2)
            {
                if (book[i].bookId < book[j].bookId)
                {
                    Books b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 2 && order == 1) // sortBooksBybookName
            {
                if (strcasecmp(book[i].bookName, book[j].bookName) == 1)
                {
                    Books b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 2 && order == 2)
            {
                if (strcasecmp(book[i].bookName, book[j].bookName) == -1)
                {
                    Books b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 3 && order == 1) ////sortBooksBybookPrice
            {
                if (book[i].bookPrice > book[j].bookPrice)
                {
                    Books b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 3 && order == 2)
            {
                if (book[i].bookPrice < book[j].bookPrice)
                {
                    Books b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 4 && order == 1)
            {
                if (book[i].starRating > book[j].starRating)
                {
                    Books b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 4 && order == 2)
            {
                if (book[i].starRating < book[j].starRating)
                {
                    Books b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
        }
    }
    printf("\nSorting Done .....!");
}
void updateBookById(Books *book, int bookId)
{
    int foundIndex = -1, i;
    for (i = 0; i < totalBooks; i++)
    {

        if (book[i].bookId == bookId)
        {
            printf("\nEnter bookPrice for %s   = ",book[i].bookName);
            scanf("%lf",&book[i].bookPrice);
            printf("\nEnter StarRatings for %s = ",book[i].bookName);
            scanf("%lf",&book[i].starRating);
            printf("\nPrice and StarRating Updated...!!!");
            foundIndex++;
        }
    }
    if (foundIndex == -1)
    {
        printf("\nError : Result Not found");
    }
}
void searchBooksByCategory(Books *book, char *bookCategory)
{
    int foundIndex = -1, i,flag=0;
    for (i = 0; i < totalBooks; i++)
    {
        foundIndex = strcasecmp(book[i].bookCategory, bookCategory);
        if (foundIndex == 0)
        {
            printf("\nBookId       = %d", book[i].bookId);
            printf("\nBookName     = %s", book[i].bookName);
            printf("\nBookAuthor   = %s", book[i].bookAuthor);
            printf("\nBookCategory = %s", book[i].bookCategory);
            printf("\nBookPrice    = %.2lf", book[i].bookPrice);
            printf("\nBookRatings  = %.1lf", book[i].starRating);
            printf("\n");
            flag++;
            // break;
        }
    }
    if (flag == 0)
    {
        printf("\nError : Result Not found for %s", bookCategory);
    }
}
void doOperation(Books *book, int ch)
{
    int totalBooks, searchbookId, foundIndex;
    char searchBookName[20], searchBookAuthor[20], searchBookCategory[20];
    switch (ch)
    {
    case 1:
        addBookInfo(book);
        break;

    case 2:
        printBooksInfo(book);
        break;
    case 3:

        printf("\nEnter Id to Search Book = ");
        scanf("%d", &searchbookId);
        foundIndex = searchBooksById(book, searchbookId);
        printBooksInfobyIndex(book, foundIndex);
        break;

    case 4:
        printf("\nEnter Book Name to search Book = ");
        fflush(stdin);
        gets(searchBookName);
        searchBooksByName(book, searchBookName);
        break;

    case 5:
        printf("\nEnter Book Author Name to search Book= ");
        fflush(stdin);
        gets(searchBookAuthor);
        searchBooksByAuthor(book, searchBookAuthor);
        break;

    case 6:
        printf("\nEnter Book Category to search Book= ");
        fflush(stdin);
        gets(searchBookCategory);
        searchBooksByCategory(book, searchBookCategory);
        break;

    case 7:
        printf("\nEnter BookId to Remove Book = ");
        scanf("%d", &searchbookId);
        removeBookById(book, searchbookId);
        break;

    case 8:
        totalBooks = totalCountofBooks(book);
        printf("\nTotal Books present in Library = %d", totalBooks);
        break;

    case 9:
        printf("\nEnter BookId to Update Book = ");
        scanf("%d", &searchbookId);
        updateBookById(book, searchbookId);
        break;
    case 10:
        printf("\n1. Sort By bookId\n2. Sort By booName\n3. Sort By bookPrice\n4. Sort By StarRatings\nChoice = ");
        scanf("%d", &ch);
        sortBookBy(book, ch);
        break;
    }
}