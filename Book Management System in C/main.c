#include <stdio.h>
#include <stdlib.h>
#include "book.h"  // include header file

int main() {
    struct Book *books = NULL;
    int count = 0, choice, id;

    while (1) {
        printf("\n--- Book Management System ---\n");
        printf("1. Add Book\n2. Display Books\n3. Search Book\n");
        printf("4. Remove Book\n5. Update Book\n6. Show Author's Books\n");
        printf("7. Show Category's Books\n8. Sort Books\n9. Top 3 Books\n10. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(&books, &count); break;
            case 2: displayBooks(books, count); break;
            case 3: searchBook(books, count); break;
            case 4: 
                printf("Enter ID to remove: "); 
                scanf("%d", &id); 
                removeBook(&books, &count, id); 
                break;
            case 5: updateBook(books, count); break;
            case 6: showAuthorBooks(books, count); break;
            case 7: showCategoryBooks(books, count); break;
            case 8: 
                printf("Sort by: 1.Price 2.Rating\n");
                scanf("%d", &id);
                sortBooks(books, count, id); 
                break;
            case 9: top3Books(books, count); break;
            case 10: 
                free(books); 
                printf("Exiting...\n"); 
                return 0;
            default: printf("Invalid choice!\n");
        }
    }
}
