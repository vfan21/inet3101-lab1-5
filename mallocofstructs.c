#include <stdio.h>
#include <stdlib.h>

struct book {

    char bookTitle[10];
    int bookNumber;
    int bookPages;

};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_books>\n", argv[0]);
        return 1;
    }

    int num_books = atoi(argv[1]);
    struct book* library = (struct book*)malloc(num_books * sizeof(struct book));

    printf("\nEnter details for %d books (Title Number Pages):\n", num_books);
    for (int i = 0; i < num_books; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: ");
        scanf(" %s", library[i].bookTitle);
        printf("Book Number: ");
        scanf("%d", &library[i].bookNumber);
        printf("Number of Pages: ");
        scanf("%d", &library[i].bookPages);
        printf("\nBook recorded!\n");
    }

    printf("\nHere are the details of all books stored:\n");
    for (int i = 0; i < num_books; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", library[i].bookTitle);
        printf("Book Number: %d\n", library[i].bookNumber);
        printf("Pages: %d\n", library[i].bookPages);
    }

    free(library);
    return 0;

}

/*

WHAT TO DO

MODIFY THIS CODE

Instead of a stupid example structure (really this is the best you could think of Joe - "myStruct", "myInt", come on man)

Update this code to do something more...real world.

For examle:

Maybe create a structure like this:

struct book {

    char bookTitle[10];
    int bookNumber;
    int bookPages;

};

Example data might be (remember we're just making stuff up here)  Here title is some made-up title.  A made up inventory number.  A made up number of pages (not a very big book...).

bookTitle - Joe's Life
bookNumber - 1234
bookPages - 23


*/