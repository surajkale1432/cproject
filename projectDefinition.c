#include <stdio.h>
#include <stdlib.h>
#include "projectHeader.h"
#include <string.h>
int totalCountofBooks(Book*book)
{
    return totalBooks;
}
Book* resizeStructArray(Book*book, int totalSize)
{
    printf("\nEnter New SIZE = ");
    scanf("%d", &size);
    book = (Book*)realloc(book, (size + totalSize) * sizeof(Book));
    return book;
}
void printBooksInfo(Book*book)
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
void addBookInfo(Book*book)
{
    int i;
    printf("\nEnter Book Id = ");
    scanf("%d", &book[totalBooks].bookId);
    for (int j = 0; j < totalBooks; j++)
    {
        if (book[totalBooks].bookId == book[j].bookId)
        {
            printf("\n%d Id already present use another", book[totalBooks].bookId);
            // addBookInfo(book);
            return;
        }
    }
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
int searchBooksById(Book*book, int bookId)
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
    printf("\nError: ID not found");
    return -1;
}
void removeBookById(Book*book, int index)
{
    int i;
    int id = book[index].bookId;
    if (index != -1)
    {
        for (i = index; i < totalBooks - 1; ++i)
        {
            book[i] = book[i + 1];
        }
        totalBooks--;
        printf("\nBook with Id = %d Deleted Successfully", id);
    }
    else
        printf("\nError: Book with this ID not found.\n");
}
void printBooksInfobyIndex(Book*book, int bookIndex)
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
void searchBooksByName(Book*book, char *bookName)
{
    int foundIndex = -1, i, flag = 0;
    for (i = 0; i < totalBooks; i++)
    {
        foundIndex = strcasecmp(book[i].bookName, bookName);
        if (foundIndex == 0)
        {
            printBooksInfobyIndex(book, i);
            flag++;
        }
    }
    if (flag == 0)
    {
        printf("\nError : Book Not found with Name %s", bookName);
    }
}

void searchBooksByAuthor(Book*book, char *bookAuthor)
{
    int foundIndex = -2, i, flag = 0;
    for (i = 0; i < totalBooks; i++)
    {
        foundIndex = strcasecmp(book[i].bookAuthor, bookAuthor);
        if (foundIndex == 0)
        {
            flag++;
            printBooksInfobyIndex(book, i);
        }
    }
    if (flag == 0)
    {
        printf("\nError : Result Not found for %s", bookAuthor);
    }
}
void sortBookBy(Book*book, int ch)
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
                    Book b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 1 && order == 2)
            {
                if (book[i].bookId < book[j].bookId)
                {
                    Book b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 2 && order == 1) // sortBooksBybookName
            {
                if (strcasecmp(book[i].bookName, book[j].bookName) == 1)
                {
                    Book b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 2 && order == 2)
            {
                if (strcasecmp(book[i].bookName, book[j].bookName) == -1)
                {
                    Book b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 3 && order == 1) ////sortBooksBybookPrice
            {
                if (book[i].bookPrice > book[j].bookPrice)
                {
                    Book b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 3 && order == 2)
            {
                if (book[i].bookPrice < book[j].bookPrice)
                {
                    Book b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 4 && order == 1)
            {
                if (book[i].starRating > book[j].starRating)
                {
                    Book b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
            else if (ch == 4 && order == 2)
            {
                if (book[i].starRating < book[j].starRating)
                {
                    Book b = book[i];
                    book[i] = book[j];
                    book[j] = b;
                }
            }
        }
    }
    printf("\nSorting Done .....!");
}
void updateBookById(Book*book, int bookIndex)
{

    printf("\nEnter bookPrice for %s   = ", book[bookIndex].bookName);
    scanf("%lf", &book[bookIndex].bookPrice);
    printf("\nEnter StarRatings for %s = ", book[bookIndex].bookName);
    scanf("%lf", &book[bookIndex].starRating);
    printf("\nPrice and StarRating Updated...!!!");
}
void searchBooksByCategory(Book*book, char *bookCategory)
{
    int foundIndex = -1, i, flag = 0;
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
void doOperation(Book*book, int ch)
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
        if (foundIndex != -1)
        {
            printBooksInfobyIndex(book, foundIndex);
        }
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
        foundIndex = searchBooksById(book, searchbookId);
        if (foundIndex != -1)
        {
            removeBookById(book, foundIndex);
        }
        break;

    case 8:
        totalBooks = totalCountofBooks(book);
        printf("\nTotal Books present in Library = %d", totalBooks);
        break;

    case 9:
        printf("\nEnter BookId to Update Book = ");
        scanf("%d", &searchbookId);
        foundIndex = searchBooksById(book, searchbookId);
        if (foundIndex != -1)
        {
            updateBookById(book, foundIndex);
        }
        break;
    case 10:
        printf("\n1. Sort By bookId\n2. Sort By booName\n3. Sort By bookPrice\n4. Sort By StarRatings\nChoice = ");
        scanf("%d", &ch);
        sortBookBy(book, ch);
        break;
    default:
        printf("\nWrong Input please Try again...!!!");
    }
}