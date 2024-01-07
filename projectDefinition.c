#include <stdio.h>
#include <stdlib.h>
#include "projectHeader.h"
#include <string.h>
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
    for (i = 0; i < totalBooks; i++)
    {
        printf("\nBookId = %d", book[i].bookId);
        printf("\nBookName = %s", book[i].bookName);
        printf("\nBookAuthor = %s", book[i].bookAuthor);
        printf("\nBookCategory = %s", book[i].bookCategory);
        printf("\nBookPrice = %.2lf", book[i].bookPrice);
        printf("\nBookRating = %.2lf", book[i].starRating);
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
    }
}
int searchBooksById(struct Books *book, int bookId)
{
    int i, found = -1;
    for (i = 0; i < totalBooks; i++)
    {
        if (book[i].bookId == bookId)
        {
            found++;
            return i;
        }
    }
    if (found == -1)
    {
        printf("\nBookId not Found in Library %d", found);
        return found;
    }
}
void removeBookById(struct Books *book, int bookId)
{
    int i, index = -1;
    for (i = 0; i < totalBooks; i++)
    {
        if (book[i].bookId == bookId)
        {
            index = i;
        }
    }
    if (index != -1)
    {
        for (i = index; i < totalBooks-1;++i)
        {
            book[i]=book[i+1];
        }
        totalBooks--;
        printf("\nBook with Id = %d Deleted Successfully",bookId);
    }
    else
    printf("\nError: Book with this ID not found.\n");
}
void printBooksInfobyIndex(struct Books *book, int bookIndex)
{
    printf("\nBookId = %d", book[bookIndex].bookId);
    printf("\nBookName = %s", book[bookIndex].bookName);
    printf("\nBookAuthor = %s", book[bookIndex].bookAuthor);
    printf("\nBookCategory = %s", book[bookIndex].bookCategory);
    printf("\nBookPrice = %.2lf", book[bookIndex].bookPrice);
    printf("\nBookRating = %.2lf", book[bookIndex].starRating);
    printf("\n--------------------------");
}
void searchBooksByName(struct Books *book, char *bookName)
{
    int foundIndex, i;
    for (i = 0; i < totalBooks; i++)
    {
        foundIndex = strcmp(book[i].bookName, bookName);
        if (foundIndex == 0)
        {
            printf("\nBook[%d]Book name = %s", i, book[i].bookName);
            printf("\nBook[%d]Book Id = %d", i, book[i].bookId);
            break;
        }

        // printf("\nbookName = %s", bookName);
    }
}
int mystrcmp(struct Books *book, char *bookName)
{
    int d, i, len1 = 0, len2 = 0, flag = 0;
    /* Finding length of first string */
    for (i = 0; book->bookName[i] != '\0'; i++)
    {
        len1++;
    }
    /* Finding length of second string */
    for (i = 0; bookName[i] != '\0'; i++)
    {
        len2++;
    }
    if (len1 != len2)
    {
        return -1;
    }
    else
    {
        for (i = 0; i < len1; i++)
        {
            if (book->bookName[i] != bookName[i])
            {
                flag = 1;
                return -1;
                break;
            }
        }
        if (flag == 0)
        {
            return book->bookId;
        }
    }
}
// int mystrchr(struct Books *book, char *bookName)
// {
//     int i;
//     for (i = 0; book->bookName != '\0'; i++)
//     {
//         if (strcmp(book->bookName[i], bookName[i])==0)
//         {
//             printf("\nmatch found");
//             return book[0].bookId;
//         }
//     }
// }
void searchBooksByAuthor(struct Books *book, char *bookAuthor)
{
    int foundIndex, i;
    for (i = 0; i < totalBooks; i++)
    {
        foundIndex = strcmp(book[i].bookAuthor, bookAuthor);
        if (foundIndex == 0)
        {
            printf("\nBook[%d]Book Id = %d", i, book[i].bookId);
            printf("\nBook[%d]Book name = %s", i, book[i].bookName);
            printf("\nBook[%d]Book Author = %s", i, book[i].bookAuthor);
            printf("\nBook[%d]Book Category = %s", i, book[i].bookCategory);
            printf("\n");
            // break;
        }
    }
}
void searchBooksByCategory(struct Books *book, char *bookCategory, int *resultArray)
{
}
void doOperation(struct Books *book, int ch)
{
    int totalBooks, searchbookId, foundIndex;
    char searchBookName[20], searchBookAuthor[20];
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
        break;
    }
}