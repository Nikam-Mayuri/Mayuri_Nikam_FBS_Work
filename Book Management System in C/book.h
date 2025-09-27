#ifndef BOOK_H
#define BOOK_H

// Structure definition
struct Book {
    int id;
    char name[50];
    char author[50];
    char category[30];
    float price;
    float rating;
};

// Function declarations (prototypes)
void addBook(struct Book **books, int *count);
void removeBook(struct Book **books, int *count, int id);
void searchBook(struct Book *books, int count);
void showAuthorBooks(struct Book *books, int count);
void showCategoryBooks(struct Book *books, int count);
void updateBook(struct Book *books, int count);
void displayBooks(struct Book *books, int count);
void sortBooks(struct Book *books, int count, int option);
void top3Books(struct Book *books, int count);

#endif
