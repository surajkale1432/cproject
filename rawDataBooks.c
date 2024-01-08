#include <stdio.h>
#include "projectHeader.h"
void rawData(struct Books *book)
{
    totalBooks=0;
    book[0].bookId = 11;
    strcpy(book[0].bookName, "Yayati");
    strcpy(book[0].bookAuthor, "V.S. Khandekar");
    strcpy(book[0].bookCategory, "Novel");
    book[0].bookPrice = 295;
    book[0].starRating = 4.5;

    totalBooks++;
    book[1].bookId = 21;
    strcpy(book[1].bookName, "Mrutunjay");
    strcpy(book[1].bookAuthor, "Shivaji Sawant");
    strcpy(book[1].bookCategory, "Novel");
    book[1].bookPrice = 400;
    book[1].starRating = 4.5;

    totalBooks++;
    book[2].bookId = 13;
    strcpy(book[2].bookName, "Yugandhar");
    strcpy(book[2].bookAuthor, "Shivaji Sawant");
    strcpy(book[2].bookCategory, "Novel");
    book[2].bookPrice = 380;
    book[2].starRating = 4.5;

    totalBooks++;
    book[3].bookId = 34;
    strcpy(book[3].bookName, "Think Like a Monk");
    strcpy(book[3].bookAuthor, "Jay shetty");
    strcpy(book[3].bookCategory, "mind peace");
    book[3].bookPrice = 500;
    book[3].starRating = 4.5;

    totalBooks++;
    book[4].bookId = 5;
    strcpy(book[4].bookName, "Rich Dad Poor Dad");
    strcpy(book[4].bookAuthor, "Robert Kiyosaki");
    strcpy(book[4].bookCategory, "Finance Book");
    book[4].bookPrice = 395;
    book[4].starRating = 4.5;

    totalBooks++;
    book[5].bookId = 6;
    strcpy(book[5].bookName, "Atomic Habit");
    strcpy(book[5].bookAuthor, "James Clear");
    strcpy(book[5].bookCategory, "mind peace");
    book[5].bookPrice = 300;
    book[5].starRating = 4.3;

    totalBooks++;
    book[6].bookId = 7;
    strcpy(book[6].bookName, "The Secret");
    strcpy(book[6].bookAuthor, "Rhonda Byrne");
    strcpy(book[6].bookCategory, "Positivity");
    book[6].bookPrice = 340;
    book[6].starRating = 4.5;

    totalBooks++;
    book[7].bookId = 8;
    strcpy(book[7].bookName, "The power of subconcious mind");
    strcpy(book[7].bookAuthor, "Dr.Joseph Murphy ");
    strcpy(book[7].bookCategory, "mind peace");
    book[7].bookPrice = 400;
    book[7].starRating = 4.5;

    totalBooks++;
    book[8].bookId = 9;
    strcpy(book[8].bookName, "Shreeman Yogi");
    strcpy(book[8].bookAuthor, "Ranjit Desai");
    strcpy(book[8].bookCategory, "Novel");
    book[8].bookPrice = 500;
    book[8].starRating = 4.5;

    totalBooks++;
    book[9].bookId = 10;
    strcpy(book[9].bookName, "The Intelligent Investor");
    strcpy(book[9].bookAuthor, "Warren Buffet");
    strcpy(book[9].bookCategory, "Finance");
    book[9].bookPrice = 350;
    book[9].starRating = 4.5;

    totalBooks++;
    book[10].bookId = 11;
    strcpy(book[10].bookName, "Wings Of Fire");
    strcpy(book[10].bookAuthor, "A.P.j.abdul kalam");
    strcpy(book[10].bookCategory, "Autobiography");
    book[10].bookPrice = 380;
    book[10].starRating = 4.4;

    totalBooks++;
    book[11].bookId = 12;
    strcpy(book[11].bookName, "Ikigai");
    strcpy(book[11].bookAuthor, "J.K.Rowling");
    strcpy(book[11].bookCategory, "Mind Piece");
    book[11].bookPrice = 400;
    book[11].starRating = 4.5;

    totalBooks++;
    book[12].bookId = 13;
    strcpy(book[12].bookName, "Harry Potter");
    strcpy(book[12].bookAuthor, "J.K.Rowling");
    strcpy(book[12].bookCategory, "Adventure");
    book[12].bookPrice = 600;
    book[12].starRating = 4.5;
    
    totalBooks++;
    book[13].bookId = 14;
    strcpy(book[13].bookName, "Bhagvad Geeta");
    strcpy(book[13].bookAuthor, "Lord krishna");
    strcpy(book[13].bookCategory, "Spiritual");
    book[13].bookPrice = 450;
    book[13].starRating = 4.5;

    totalBooks++;

}