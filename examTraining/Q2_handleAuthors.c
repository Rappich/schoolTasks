#include <stdio.h>
#include <string.h>

typedef struct Books 
{
    char title[40];
    char author[40];
    int pages;
} books;

void searchByAuthor(books bookArr[], int size, char authorName[]);

int main() 
{
    books bookArr[5] = 
    {
        {"The Great Gatsby", "F. Scott Fitzgerald", 218},
        {"1984", "George Orwell", 328},
        {"To Kill a Mockingbird", "Harper Lee", 281},
        {"Moby Dick", "Herman Melville", 635},
        {"Pride and Prejudice", "Jane Austen", 279}
    };

    char authorName[40];
    printf("Enter author name to search for: ");
    fgets(authorName, sizeof(authorName), stdin);

    authorName[strcspn(authorName, "\n")] = '\0';

    searchByAuthor(bookArr, 5, authorName);

    return 0;
}

void searchByAuthor(books bookArr[], int size, char authorName[]) 
{
    int found = 0;

    for (int i = 0; i < size; i++) 
    {
        if (strcmp(bookArr[i].author, authorName) == 0) 
        {
            printf("%s wrote the book: %s\n",bookArr[i].author, bookArr[i].title);
            found = 1;
        }
    }

    if (!found) 
    {
        printf("No books found by author: %s\n", authorName);
    }
}