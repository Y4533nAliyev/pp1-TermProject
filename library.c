#include "library.h"
#include <stdlib.h>
#include <stdbool.h>

libraryitem_t *new_book(char *title, char *author, int year, int id, bool isAvaible, genre_t genre){
  libraryitem_t *book = malloc(sizeof(libraryitem_t));
  if(book == NULL){
    return NULL;
  }
  book->kind = BOOK;
  book->data.book = (book_t){
    .title = title,
    .author = author,
    .year = year,
    .id = id,
    .isAvaible = isAvaible,
    .genre = genre};

  return book;  
}
