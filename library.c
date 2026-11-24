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


libraryitem_t *new_cd(char *title, char *author, int year, int id, bool isAvaible, capacity_t capacity){
  libraryitem_t *cd = malloc(sizeof(libraryitem_t));
  if(cd == NULL){
    return NULL;
  }

  cd->kind = CD;
  cd->data.cd = (cd_t){
    .title = title,
    .author = author,
    .year = year,
    .id = id,
    .isAvaible = isAvaible,
    .capacity = capacity};

  return cd;
}

libraryitem_t *new_magazine(char *title, int year, int id, bool isAvaible){
  libraryitem_t *magazine = malloc(sizeof(libraryitem_t));
  if(magazine == NULL){
    return NULL;
  }

  magazine->kind = MAGAZINE;
  magazine->data.magazine = (magazine_t){
    .title = title,
    .year = year,
    .id = id,
    .isAvaible = isAvaible,
  };

  return magazine;
}
