#include "library.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv){
  (void)argc; // get rid of error
  if(argv[1] == NULL){
    printf("Usage: ./library <library_item title> <library_item author> <library_item year> <library_item id>\n");
    return EXIT_FAILURE;
  }
  if(strcmp(argv[1], "book") == 0 && argv[2] != NULL && argv[3] == NULL){
    libraryitem_t *book = new_book(argv[2], "author", 0, 0,FICTION);
    printf("Title: %s\n", book->data.book.title);
  }else if(argv[3] != NULL && argv[4] == NULL){
    libraryitem_t *book = new_book(argv[2], argv[3], 0, 0,FICTION);
    printf("Title: %s\n", book->data.book.title);
    printf("Author: %s\n", book->data.book.author);
  }else if(argv[4] != NULL && argv[5] == NULL){
    libraryitem_t *book = new_book(argv[2], argv[3], atoi(argv[4]), 0,FICTION);
    printf("Title: %s\n", book->data.book.title);
    printf("Author: %s\n", book->data.book.author);
    printf("Year: %d\n", book->data.book.year);
  }else if(argv[5] != NULL && argv[6] == NULL){
    libraryitem_t *book = new_book(argv[2], argv[3], atoi(argv[4]), atoi(argv[5]),FICTION);
    printf("Title: %s\n", book->data.book.title);
    printf("Author: %s\n", book->data.book.author);
    printf("Year: %d\n", book->data.book.year);
    printf("ID: %d\n", book->data.book.id);
  }else if(argv[6] != NULL){
    libraryitem_t *book = new_book(argv[2], argv[3], atoi(argv[4]), atoi(argv[5]), atoi(argv[6]));
    printf("Title: %s\n", book->data.book.title);
    printf("Author: %s\n", book->data.book.author);
    printf("Year: %d\n", book->data.book.year);
    printf("ID: %d\n", book->data.book.id);
    printf("Genre: %d\n", book->data.book.genre);
  }



  if(strcmp(argv[1], "cd") == 0 && argv[2] != NULL){
    libraryitem_t *cd = new_cd(argv[2], "author", 0, 0,SMALL);
    printf("%s\n", cd->data.cd.title);
  }
  if(strcmp(argv[1], "magazine") == 0 && argv[2] != NULL){
    libraryitem_t *magazine = new_magazine(argv[2],0,0);
    printf("%s\n", magazine->data.magazine.title);
  }

  printf("done! :D\n");
  return 0;
}
