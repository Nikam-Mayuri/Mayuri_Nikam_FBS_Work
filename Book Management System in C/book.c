#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"

// ---------------- Add Book ----------------
void addBook(struct Book **books, int *count) {
  
    // If no books yet, allocate memory using malloc
    if (*count == 0) {
        *books = (struct Book *)malloc(sizeof(struct Book));
        if (*books == NULL) {
            printf("Memory allocation failed!\n");
            return;
        }
    } else {
        // If already have books, reallocate memory
        *books = (struct Book *)realloc(*books, (*count + 1) * sizeof(struct Book));
        if (*books == NULL) {
            printf("Memory reallocation failed!\n");
            return;
        }
    }

    // Input details for new book
    printf("Enter Book ID: ");
    scanf("%d", &((*books)[*count].id));

    printf("Enter Book Name: ");
    scanf(" %[^\n]", (*books)[*count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", (*books)[*count].author);

    printf("Enter Category: ");
    scanf(" %[^\n]", (*books)[*count].category);

    printf("Enter Price: ");
    scanf("%f", &((*books)[*count].price));

    printf("Enter Rating: ");
    scanf("%f", &((*books)[*count].rating));

    (*count)++; // Increase number of books
    printf("Book added successfully!\n");
}


// ---------------- Display All Books ----------------
void displayBooks(struct Book *books, int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }
    printf("\n%-5s %-20s %-20s %-15s %-10s %-10s\n", 
           "ID", "Name", "Author", "Category", "Price", "Rating");
    for (int i = 0; i < count; i++) {
        printf("%-5d %-20s %-20s %-15s %-10.2f %-10.1f\n",
               books[i].id, books[i].name, books[i].author,
               books[i].category, books[i].price, books[i].rating);
    }
}

// ---------------- Remove Book ----------------
void removeBook(struct Book **books, int *count, int id) {
    if (*count == 0) {
        printf("No books to remove.\n");
        return;
    }
    int index = -1;
    for (int i = 0; i < *count; i++) {
        if ((*books)[i].id == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Book not found!\n");
        return;
    }
    for (int i = index; i < *count - 1; i++) {
        (*books)[i] = (*books)[i + 1];
    }
    *books = realloc(*books, (*count - 1) * sizeof(struct Book));
    (*count)--;
    printf("Book removed successfully!\n");
}

// ---------------- Search Book ----------------
void searchBook(struct Book *books, int count) {
    if (count == 0) {
        printf("No books to search.\n");
        return;
    }
    int choice;
    printf("Search by: 1. ID  2. Name\n");
    scanf("%d", &choice);
    getchar();
    if (choice == 1) {
        int id;
        printf("Enter Book ID: ");
        scanf("%d", &id);
        for (int i = 0; i < count; i++) {
            if (books[i].id == id) {
                printf("Found: %s by %s\n", books[i].name, books[i].author);
                return;
            }
        }
    } else if (choice == 2) {
        char name[50];
        printf("Enter Book Name: ");
        fgets(name, 50, stdin);
        name[strcspn(name, "\n")] = '\0';
        for (int i = 0; i < count; i++) {
            if (strcmp(books[i].name, name) == 0) {
                printf("Found: ID %d, Author: %s\n", books[i].id, books[i].author);
                return;
            }
        }
    }
    printf("Book not found!\n");
}

// ---------------- Show Author's Books ----------------
void showAuthorBooks(struct Book *books, int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }
    char author[50];
    getchar();
    printf("Enter Author Name: ");
    fgets(author, 50, stdin);
    author[strcspn(author, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("ID: %d, Name: %s, Price: %.2f, Rating: %.1f\n",
                   books[i].id, books[i].name, books[i].price, books[i].rating);
            found = 1;
        }
    }
    if (!found) printf("No books found by this author.\n");
}

// ---------------- Show Category's Books ----------------
void showCategoryBooks(struct Book *books, int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }
    char category[30];
    getchar();
    printf("Enter Category: ");
    fgets(category, 30, stdin);
    category[strcspn(category, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].category, category) == 0) {
            printf("ID: %d, Name: %s, Author: %s, Price: %.2f\n",
                   books[i].id, books[i].name, books[i].author, books[i].price);
            found = 1;
        }
    }
    if (!found) printf("No books found in this category.\n");
}

// ---------------- Update Book ----------------
void updateBook(struct Book *books, int count) {
    if (count == 0) {
        printf("No books to update.\n");
        return;
    }
    int id;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("Enter new Price: ");
            scanf("%f", &books[i].price);
            printf("Enter new Rating: ");
            scanf("%f", &books[i].rating);
            printf("Book updated successfully!\n");
            return;
        }
    }
    printf("Book not found!\n");
}

// ---------------- Sort Books ----------------
void sortBooks(struct Book *books, int count, int option) {
    if (count < 2) {
        printf("Not enough books to sort.\n");
        return;
    }
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            int swap = 0;
            if (option == 1 && books[i].price > books[j].price) swap = 1;
            if (option == 2 && books[i].rating < books[j].rating) swap = 1;
            if (swap) {
                struct Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
    printf("Books sorted successfully!\n");
}

// ---------------- Top 3 Books ----------------
void top3Books(struct Book *books, int count) {
    if (count == 0) {
        printf("No books available.\n");
        return;
    }
    if (count < 3) {
        printf("Less than 3 books available. Showing all:\n");
        displayBooks(books, count);
        return;
    }
    // Sort by rating (descending)
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (books[i].rating < books[j].rating) {
                struct Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
    printf("Top 3 Books by Rating:\n");
    for (int i = 0; i < 3; i++) {
        printf("ID: %d, %s (Rating: %.1f)\n", 
               books[i].id, books[i].name, books[i].rating);
    }
}
