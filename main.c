#include "library.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv){
  (void)argc; // get rid of error
  if(argv[1] == NULL){
    printf("Usage: ./library <book_title>\n");
    return EXIT_FAILURE;
  }
  if(strcmp(argv[1], "book") == 0 && argv[2] != NULL){
    libraryitem_t *book = new_book(argv[2], "author", 0, 0, 0, FICTION);
    printf("%s\n", book->data.book.title);
  }

  if(strcmp(argv[1], "cd") == 0 && argv[2] != NULL){
    libraryitem_t *cd = new_cd(argv[2], "author", 0, 0, 0, SMALL);
    printf("%s\n", cd->data.cd.title);
  }
  printf("done! :D\n");
  return 0;
}
