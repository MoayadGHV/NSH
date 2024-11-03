#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int bookID;
    char title[100];
    char author[50];
    int year;
    float price;
} Book;

Book books[100];
int N = 0;
FILE *fp;


void loadBookData() {

    fp = fopen("books.dat", "r");
    if (fp == NULL) {
        printf("Error: Can't read file.\n");
    } else {
        fread(&N, sizeof(int), 1, fp);
        fread(books, sizeof(Book), N, fp);
        printf("Loaded %d book(s).\n", N);
    }
}

void saveBookData() {
    if (fp == NULL) {
        printf("Error: Can't save file.\n");
    } else {
        fwrite(&N, sizeof(int), 1, fp);
        fwrite(books, sizeof(Book), N, fp);
  
        printf("Data saved.\n");
    }

}

void inputBookData() {

    printf("\nEnter book details (ID, Title, Author, Year, Price):\n");
    scanf("%d", &books[N].bookID);
    getchar();
    fgets(books[N].title, 100, stdin);
    fgets(books[N].author, 50, stdin);
    scanf("%d", &books[N].year);
    scanf("%f", &books[N].price);
    N++;
    saveBookData();
}

void displayBookData() {

    for (int i = 0; i < N; i++) {
        printf("\nID: %d\nTitle: %sAuthor: %sYear: %d\nPrice (SAR): %.2f\n", books[i].bookID, books[i].title, books[i].author, books[i].year, books[i].price);
    }

}

void findBookByID() {
    int id;

    printf("Enter book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < N; i++) {
        if (books[i].bookID == id) {
            printf("\nID: %d\nTitle: %sAuthor: %sYear: %d\nPrice (SAR): %.2f\n", books[i].bookID, books[i].title, books[i].author, books[i].year, books[i].price);
            return;
        }
    }
    printf("Book not found.\n");
}

void calculateTotalValue() {
    float total = 0;
    for (int i = 0; i < N; i++) {
        total += books[i].price;
    }
    printf("Total value: SAR %.2f\n", total);
}

int main() {
    loadBookData();
    int choice;



    while (1) {
        printf("\nLibrary Management System\n1. Add a Book\n2. Display All Books\n3. Search for Book by ID\n4. Calculate Total Value\n5. Exit\nChoice: ");
        scanf("%d", &choice);


        if (choice == 1) {
            inputBookData();
        } else if (choice == 2) {
            displayBookData();
        } else if (choice == 3) {
            findBookByID();
        } else if (choice == 4) {
            calculateTotalValue();
        } else if (choice == 5) {
            printf("Thank you for using Moayad's Library system. Have a great day!\n");
            break;
        } else {
            printf("Invalid choice\n");
        }
    }
    fclose(fp);
    return 0;
}
