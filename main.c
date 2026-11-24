#include "library.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv){
  (void)argc; // get rid of error
  if(argv[1] == NULL){
    printf("Usage: ./library <book title> <book author> <book year> <book id> <book genre>\n");
    printf("       ./library <cd title> <cd author> <cd year> <cd id> <cd capacity>\n");
    printf("       ./library <magazine title> <magazine year> <magazine id>\n");
    return EXIT_FAILURE;
  }
  if(strcmp(argv[1], "book") == 0){
    const char *title = (argc > 2) ? argv[2] : "Untitled";
    const char *author = (argc > 3) ? argv[3] : "No Author";
    const int year = (argc > 4) ? atoi(argv[4]) : 0;
    const int id = (argc > 5) ? atoi(argv[5]) : 0;
    const int genre = (argc > 6) ? atoi(argv[6]) : 0;

    libraryitem_t *book = new_book((char *)title, (char *)author, year, id, genre);
    printf("Title: %s\n", book->data.book.title);
    printf("Author: %s\n", book->data.book.author);
    printf("Year: %d\n", book->data.book.year);
    printf("ID: %d\n", book->data.book.id);
    printf("Genre: %d\n", book->data.book.genre);
    free(book);
  }


  if(strcmp(argv[1], "cd") == 0){
    const char *title = (argc > 2) ? argv[2] : "Untitled";
    const char *author = (argc > 3) ? argv[3] : "No Author";
    const int year = (argc > 4) ? atoi(argv[4]) : 0;
    const int id = (argc > 5) ? atoi(argv[5]) : 0;
    const int capacity = (argc > 6) ? atoi(argv[6]) : 0;

    libraryitem_t *cd = new_cd((char *)title, (char *)author, year, id, capacity);
    printf("Title: %s\n", cd->data.cd.title);
    printf("Author: %s\n", cd->data.cd.author);
    printf("Year: %d\n", cd->data.cd.year);
    printf("ID: %d\n", cd->data.cd.id);
    printf("Capacity: %d\n", cd->data.cd.capacity);
    free(cd);
  }
  if(strcmp(argv[1], "magazine") == 0){
    const char *title = (argc > 2) ? argv[2] : "Untitled";
    const int year = (argc > 3) ? atoi(argv[3]) : 0;
    const int id = (argc > 4) ? atoi(argv[4]) : 0;

    libraryitem_t *magazine = new_magazine((char *)title, year, id);
    printf("Title: %s\n", magazine->data.magazine.title);
    printf("Year: %d\n", magazine->data.magazine.year);
    printf("ID: %d\n", magazine->data.magazine.id);
    free(magazine);
  }
  printf("done! :D\n");
  return 0;
}
